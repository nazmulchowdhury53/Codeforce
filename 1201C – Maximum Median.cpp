#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    vector<long long> v(a);

    for (int i = 0; i < a; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int c = a / 2;
    long long d = v[c], e = v[c] + b + 1;

    while (e > d + 1) {
        long long m = (d + e) / 2;
        long long f = 0;

        for (int i = c; i < a; i++) {
            if (v[i] < m)
                f += (m - v[i]);
            if (f > b)
                break;
        }

        if (f <= b)
            d = m;
        else
            e = m;
    }

    cout << d << endl;
    return 0;
}
