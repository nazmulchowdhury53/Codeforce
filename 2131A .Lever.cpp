
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
        cin >> b[i];

        int aa= 0;

        while (true) {
            bool c = false;

             for (int i = 0; i < n; i++) {
                if (a[i] > b[i]) {
                    a[i]--;
                    c = true;
                    break;
                }
            }

            for (int i = 0; i < n; i++) {
                if (a[i] < b[i]) {
                    a[i]++;
                    break;
                }
            }

            aa++;

            if (!c) break;
        }

        cout << aa << endl;
    }


}
