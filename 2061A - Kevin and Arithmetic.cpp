#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int countTrailingZeros(int x) {
    int count = 0;
    while (x % 2 == 0) {
        x /= 2;
        count++;
    }
    return count;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
       int n;
    cin >> n;
    vector<int> a(n);

    for (int &x : a) {
        cin >> x;
    }
 vector<pair<int, int>> vv(n);
    for (int i = 0; i < n; i++) {
        vv[i] = {countTrailingZeros(a[i]), a[i]};
    }
 sort(vv.begin(), vv.end(), [](const pair<int, int>& x, const pair<int, int>& y) {
        return x.first > y.first;
    });

    int s = 0, pp = 0;
    for (auto& p : vv) {
        s += p.second;
        if (s % 2 == 0) {
            pp++;
            while (s % 2 == 0) {
                s /= 2;
            }
        }
    }

    cout << pp <<endl;
    }
    return 0;
}

