#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    const int MAX = 100001;
    vector<long long> c(MAX, 0);
    vector<long long> dp(MAX, 0);
    int n, x;
    cin >> n;

    int m = 0;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        c[x]++;
        if (x > m) {
            m = x;
        }
    }

    dp[1] = c[1];
    for (int i = 2; i <= m; ++i) {
        dp[i] = max(dp[i - 1], dp[i - 2] + i * c[i]);
    }

    cout << dp[m] << endl;
    return 0;
}
