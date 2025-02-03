#include<bits/stdc++.h>
#include<math.h>
#include<string.h>
#include<map>
using namespace std;
int main()
{

    long long int a,b,c,d,i,j;
    cin>>a>>b;
    char r[a+1];
    cin>>r;
    while(b--)
    {
        for(auto i:a-1)
    {
        if(r[i]=='B' and r[i1]=='G')
        {
            char cc=r[i];
        r[i]=r[i+1];
        r[i+1]=cc;
        i++;
        }
    }
    }
    cout<<r<<endl;;
}
