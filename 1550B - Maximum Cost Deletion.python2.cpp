#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b,d;
    cin >> n >> a >> b;
    string s;
    cin >> s;
   int c = a * n;

    if (b >= 0) {
         c += b * n;
    } else {
          d = 1;
        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1]) {
                d++;
            }
        }
       c += b * ((d / 2) + 1);
    }
    cout << c << endl;
    }
    return 0;
}

