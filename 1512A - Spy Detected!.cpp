
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int c = -1;

        if (a[0] == a[1]) {
             for (int i = 2; i < n; ++i) {
                if (a[i] != a[0]) {
                   c = i + 1;
                    break;
                }
            }
        } else if (a[0] == a[2]) {
           c= 2;
        } else {
            c = 1;
        }

        cout << c<< endl;
    }


}
