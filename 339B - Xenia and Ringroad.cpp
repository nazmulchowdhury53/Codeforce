
#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<algorithm>
#include<string>
using namespace std;
int main() {
   long long a,b,d = 1,e = 0,c;
    cin >>a>>b;

    for (long long i = 0; i <b; i++) {
        cin >>c;
        if (c>=d) {
            e += c -d;
        } else {
            e+= a - (d -c);
        }
       d = c;
    }

   cout <<e << endl;

}

