#include<bits/stdc++.h>
#include<math.h>
#include<vector>
#include<map>
using namespace std;
int main()
{

    long long int a,b=0,c,d,e;
    cin>>a;
    while(a>0)
    {
        b+=(a & 1);
        a>>=1;

    }
    cout<<b<<endl;

}
