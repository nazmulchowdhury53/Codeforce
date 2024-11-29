#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

double dp[55][55][100];

int a[55];

double C[55][55];
void initCombinations() {
    C[0][0] = 1.0;
    for (int i = 1; i <= 50; i++) {
        C[i][0] = 1.0;
        for (int j = 1; j <= i; j++) {
            C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    initCombinations();
    for (int i = 1; i <= m; i++) {
        cin >> a[i];
    }
    memset(dp, 0, sizeof(dp));
    dp[0][0][0] = 1.0;
    for (int i = 1; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            for (int k = 0; k <= n; k++) {
                int maxInCurrent = min(k * a[i], j);

                for (int c = 0; c <= maxInCurrent; c++) {
                    if (k * a[i] - a[i] + 1 > c) {
                       dp[i][j][k] += dp[i - 1][j - c][k] * pow(i - 1, j - c) / pow(i, j) * C[j][c];
                    } else {
                       for (int tt = 0; tt <= k; tt++) {
                            dp[i][j][k] += dp[i - 1][j - c][tt] * pow(i - 1, j - c) / pow(i, j) * C[j][c];
                        }
                    }
                }
            }
        }
    }
    double ans = 0.0;
    for (int i = 1; i <= n; i++) {
        ans += dp[m][n][i] * i;
    }
    cout.precision(10);
    cout << fixed << ans << endl;

    return 0;
}
 
