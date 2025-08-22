#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<vector<int>> coprime(1001);
    for (int i = 1; i <= 1000; ++i) {
        for (int j = 1; j <= 1000; ++j) {
            if (__gcd(i, j) == 1) {
                coprime[i].push_back(j);
            }
        }
    }

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
   vector<int> last_index(1001, -1);
        for (int i = 0; i < n; ++i) {
            last_index[a[i]] = i + 1;
        }

        int answer = -1;
         for (int v = 1; v <= 1000; ++v) {
            if (last_index[v] == -1)
                continue;
            for (int u : coprime[v]) {
                if (last_index[u] != -1) {
                    answer = max(answer, last_index[v] + last_index[u]);
                }
            }
        }

        cout << answer << "\n";
    }

    return 0;
}
