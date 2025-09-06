#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, c, d = 0;
    cin >> a >> b;

    vector<long long> v(a), vv(a), vvv(a);

    for (int i = 0; i < a; i++) {
        cin >> v[i] >> vv[i];
        vvv[i] = v[i];
        d += v[i];
    }

    c = b - d;
    if (c < 0) {
        cout << "NO"<<endl;
        return 0;
    }
  for (int i = 0; i < a && c > 0; i++) {
        long long  e = min(c, vv[i] - v[i]);
        vvv[i] += e ;
        c -= e ;
    }

    if (c > 0) {
        cout << "NO"<<endl;
        return 0;
    }

    cout << "YES"<<endl;
    for (long long x : vvv)
        cout << x << " ";
    cout <<endl;

    return 0;
}
