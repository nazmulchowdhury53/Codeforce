#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <climits>
using namespace std;

int main() {
   long long int t,c;
    cin >> t;
    vector<int>v;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
 for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
      vector<long long> vv(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            vv[i] = vv[i - 1] + a[i - 1];
        }

        long long ans = LLONG_MAX;

        for (int m = 1; m <= n; m++) {
            c = k - vv[m - 1] - a[m - 1];
            if (c >= 0) {
                ans = min(ans, c);
            }
        }

       v.push_back(ans);
    }


    for (int i : v) {
        cout << i << endl;
    }

    return 0;
}
