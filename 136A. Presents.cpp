#include <bits/stdc++.h>
#include <math.h>
#include <string.h>
using namespace std;

int main() {
    long long int a, i;
    cin >> a;

    vector<int> v(a), vv(a);
    for (i = 0; i < a; i++) {
        cin >> v[i];
        vv[v[i] - 1] = i + 1;
    }

    for (i = 0; i < a; i++) {
        cout << vv[i] << " ";
    }

    return 0;
}
