#include<bits/stdc++.h>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;
int main()
{

    long long int a,b,d,e,c=0;
    char s[51];
    cin>>a>>b>>d;
    c =a*d*(d+1)/2;
    e =c-b;
    if(e<0)
    {
        e =0;
    }
    cout<<e<<endl;
}
