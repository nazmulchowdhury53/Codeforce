#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> v;

    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<int> vv;
        int s_sum = 0;
 for (int i = n - 1; i >= 0; i--) {
            vv.push_back(s_sum);
            if (s[i] == '1') {
                s_sum += 1;
            } else {
                s_sum -= 1;
            }
        } sort(vv.rbegin(), vv.rend());

        int sum = 0;
        int ans = -1;
  for (int i = 2; i <= n; i++) {
            if (i - 2 < (int)vv.size()) {
                sum += vv[i - 2];
                if (sum >= k) {
                    ans = i;
                    break;
                }
            }
        }

        v.push_back(ans);
    }

     for (int i : v) {
        cout << i << endl;
    }

    return 0;
}
