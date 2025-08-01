

#include <bits/stdc++.h>

#define int long long
#define endl "\n"
#define deq deque
#define pii pair<int, int>
#define all(x) x.begin(), x.end()

using namespace std;

class Solution {
private:
    int n, s;
    deq<int> a;
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    int sum = 0;

public:
    void readInput() {
        cin >> n >> s;
        a.resize(n);
        cnt0 = cnt1 = cnt2 = 0;
        sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
            if (a[i] == 0) cnt0++;
            else if (a[i] == 1) cnt1++;
            else if (a[i] == 2) cnt2++;
        }
    }

    void process() {
        int T = s - sum;
        if (T < 0 || T == 1) {
            printResult();
        } else {
            cout << -1 << endl;
        }
    }

    void printResult() {
        bool first = true;
        for (int i = 0; i < cnt0; i++) {
            if (!first) cout << ' ';
            cout << 0;
            first = false;
        }
        for (int i = 0; i < cnt2; i++) {
            if (!first) cout << ' ';
            cout << 2;
            first = false;
        }
        for (int i = 0; i < cnt1; i++) {
            if (!first) cout << ' ';
            cout << 1;
            first = false;
        }
        cout << endl;
    }
};

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        Solution sol;
        sol.readInput();
        sol.process();
    }

    return 0;
}
