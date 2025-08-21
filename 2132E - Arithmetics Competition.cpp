
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n, m, q;
    cin >> n >> m >> q;
    vector<ll> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    sort(a.begin(), a.end(), greater<ll>());
    sort(b.begin(), b.end(), greater<ll>());

    vector<ll> preA(n+1, 0), preB(m+1, 0);
    for (int i = 1; i <= n; i++) preA[i] = preA[i-1] + a[i-1];
    for (int i = 1; i <= m; i++) preB[i] = preB[i-1] + b[i-1];

    while (q--) {
        int xi, yi, zi;
        cin >> xi >> yi >> zi;
        int L = max(0, zi - yi);
        int R = min(xi, zi);
        if (L > R) {
            cout << 0 << '\n';
            continue;
        }
        ll ans = 0;
        int low = L, high = R;
        while (high - low > 2) {
            int mid1 = low + (high - low) / 3;
            int mid2 = high - (high - low) / 3;
            ll f1 = preA[mid1] + preB[zi - mid1];
            ll f2 = preA[mid2] + preB[zi - mid2];
            if (f1 < f2) {
                low = mid1;
            } else {
                high = mid2;
            }
        }
        for (int k = low; k <= high; k++) {
            ans = max(ans, preA[k] + preB[zi - k]);
        }
        cout << ans <<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
