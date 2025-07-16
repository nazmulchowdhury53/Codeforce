
#include <bits/stdc++.h>
using namespace std;

int l(int a, int b) {
    return (a / __gcd(a, b)) * b;
}

string r(const string &s, int t) {
    string x;
    int c = t / s.size();
    for (int i = 0; i < c; ++i) {
        x += s;
    }
    return x;
}

int main() {
   int q;
    cin >> q;
    while (q--) {
        string a, b;
        cin >> a >> b;

        int n = a.size(), m = b.size();
        int d = l(n, m);

        string sa = r(a, d);
        string sb = r(b, d);

        if (sa == sb)
            cout << sa <<endl;
        else
            cout << "-1\n";
    }


}
