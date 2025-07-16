#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        string s;
        cin >> n >> s;

        unordered_set<char> used;
        long long ans = 0;

        for (int i = 0; i < n; ++i) {
            if (used.find(s[i]) == used.end()) {
                used.insert(s[i]);
                ans += (n - i);
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
