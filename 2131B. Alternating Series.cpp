
#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; ++i) {
            cout << (i % 2 == 1 ? -1 : (i == n ? 2 : 3));
            if (i < n)
            cout << ' ';
        }
        cout <<endl;
    }

}
