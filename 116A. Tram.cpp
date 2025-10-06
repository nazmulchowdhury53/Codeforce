#include<bits/stdc++.h>
#include<math.h>
#include<vector>
using namespace std;
int main()
{

    long long int a,b,c,d,i,j,e,f;
    cin>>a;
    d=0,e=0;
    while(a--)
    {

        cin>>b>>c;

        d-=b;
        d+=c;
        e=max(e,d);
    }
    cout<<e<<endl;
}
