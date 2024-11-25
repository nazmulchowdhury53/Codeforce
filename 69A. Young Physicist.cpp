#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int a, b = 0, c = 0, d = 0, e, f, g;
    cin >> a;
for (int i = 0; i < a; i++) {
       cin >> e >> f >> g;
        b += e;
        c += f;
        d += g;
    }
   if (b == 0 && c == 0 && d == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

