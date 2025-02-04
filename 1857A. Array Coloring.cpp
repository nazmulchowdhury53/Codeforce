#include<bits/stdc++.h>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;
int main()
{

    long long int a,b,c,d,e,i;
    cin>>a;
    while(a--)
    {
    d=0;
        cin>>b;
        for(i=0;i<b;i++){
            cin>>c;
            d+=c;
        }
        if(d%2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
