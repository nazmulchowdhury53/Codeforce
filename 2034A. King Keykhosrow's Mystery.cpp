#include <bits/stdc++.h>
#include<math.h>
#include <algorithm>
using namespace std;

int main() {
   long long int a,b,c,d,e;
    cin >>a;

    while (a--) {
cin >>c>>d;

          b= max(c,d);

  while ((b%c) != (b%d)) {
        ++b;  }

        cout <<b<< endl;
    }

}
 
