#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t,b,c,d,e;
    cin >> t;
    while (t--) {
        cin>>c>>b;
        if(c+1>=b && (c+1-b)%9==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}
