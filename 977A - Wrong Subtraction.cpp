#include<bits/stdc++.h>
#include<math.h>
#include<vector>
#include<map>
using namespace std;
int main()
{

    long long int a,b,c,d,e,i,j;
    cin>>a>>b;
    for(i=0;i<b;i++)
        {
            if(a%10==0)
    {
       a/=10;
    }
    else
    {
       --a;
    }
        }
        cout<<a<<endl;
}
