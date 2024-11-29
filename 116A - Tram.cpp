#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{

    long long int a,b,c,d=0,e=0,i;
    cin>>a;
    while(a--)
    {

        cin>>b>>c;
        d-=b;
        d+=c;
    if(e<d)
    {
        e=d;
    }
    }
    cout<<e<<endl;
}
