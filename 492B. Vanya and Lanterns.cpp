#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std;
int main() {
    int a, c,i;
     cin >> a >>c;
    vector<int>v(a);

    for (  i = 0; i <a; ++i) {
        cin >>v[i];
    }
  sort(v.begin(),v.end());
 int b = 0;
    for ( i = 1; i < a; ++i) {
       b = max(b,v[i] -v[i - 1]);
    }
  double dd = max(v[0], c - v[a - 1]);
   double d =  max(dd, b / 2.0);
   cout <<  fixed << setprecision(10) << d << endl;

    return 0;
}

