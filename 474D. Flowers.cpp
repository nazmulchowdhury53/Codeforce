#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, k;
    cin >> t >> k;

    int MAXN = 100000;

    vector<long long> v(MAXN+1, 0), vv(MAXN+1, 0);
    v[0] = 1;

    for (int i = 1; i <= MAXN; i++) {
        v[i] = v[i-1];
        if (i >= k) v[i] = (v[i] + v[i-k]) % MOD;
        vv[i] = (vv[i-1] + v[i]) % MOD;
    }

    while (t--) {
        int a, b;
        cin >> a >> b;
        long long ans = (vv[b] - vv[a-1] + MOD) % MOD;
        cout << ans << "\n";
    }
    return 0;
}
