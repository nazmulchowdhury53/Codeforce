#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string.h>
using namespace std;
int main()
{

    long long int a,b,c,d,e,f,i,j;
    cin>>a;
    vector<long long>v(a);
    c=INT_MAX,d=INT_MIN,e=0,f=0;
    for(i=0;i<a;i++)
    {
        cin>>v[i];
        if(v[i]<c)
        {
            c=v[i];
            e=1;
        }
        else if(v[i]==c)
        {

            e++;
        }
         if(v[i]>d)
        {
            d=v[i];
            f=1;
        }
        else if(v[i]==d)
        {

            f++;
        }

    }
    j=d-c;
    long long w;
    if(j==0)
    {

        w=(long long)a*(a-1)/2;
    }
    else
    {

        w=(long long)e*f;
    }
    cout<<j<<" "<<w<<endl;

}
