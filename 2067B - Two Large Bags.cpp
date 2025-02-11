#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n;
    cin >> n;

    vector<ll> a(n + 1, 0);
    for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        a[x]++;
    }

    for (int i = 1; i < n; i++) {
        if (a[i] == 1) {
            cout << "No"<<endl;
            return;
        } else if (a[i] != 0) {
            ll v = a[i];
            a[i] = 2;
            a[i + 1] += v - 2;
        }
    }

    for (auto x : a) {
        if (x % 2 == 1) {
            cout << "No"<<endl;
            return;
        }
    }

    cout << "Yes"<<endl;
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
