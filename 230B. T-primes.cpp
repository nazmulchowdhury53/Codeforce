#include <bits/stdc++.h>
#include <vector>
#include <math.h>
#include<algorithm>
#include<string.h>
#include <set>
using namespace std;
const int MAX_LIMIT = 1000000;

 vector<bool>v(int a) {
     vector<bool> vv(a+ 1, true);
    vv[0] = vv[1] = false;
    for (int i = 2; i * i <= a; ++i) {
        if (vv[i]) {
            for (int j = i * i; j <= a; j += i) {
                vv[j] = false;
            }
        }
    }
    return vv;
}

int main() {
    vector<bool>vv = v(MAX_LIMIT);

    int n;
     cin >> n;
    while (n--) {
        long long x;
        cin >> x;
 long long root = static_cast<long long>( sqrt(x));
        if (root * root == x &&vv[root]) {
          cout << "YES\n";
        } else {
          cout << "NO\n";
        }
    }


}

