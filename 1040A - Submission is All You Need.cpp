
#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

void solve() {
    int n;
    cin >> n;
    int zeros = 0;
    int total = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 0)
            zeros++;
        total += x;
    }
    cout << zeros + total << endl;
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
