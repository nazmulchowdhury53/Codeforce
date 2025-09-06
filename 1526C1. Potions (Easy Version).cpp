
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin >> a;

    ll b = 0;
    int c = 0;
    priority_queue<ll, vector<ll>, greater<ll>> d;

    for (int i = 0; i < a; i++) {
        ll e;
        cin >> e;

        b += e;
        c++;

        if (e < 0) {
            d.push(e);
        }

        if (b < 0 && !d.empty()) {
            ll f = d.top();
            d.pop();
            b -= f;
            c--;
        }
    }

    cout << c << "\n";
    return 0;
}
