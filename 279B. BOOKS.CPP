#include<bits/stdc++.h>
#include<math.h>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
int maxbooks(int a,int b, vector<int>&v)
{
    int c=0,d=0,e=0;

    for(int j=0;j<a;j++)
    {
        d+=v[j];
        while(d>b)
        {
            d-=v[c];
            c++;
        }
        e=max(e,j-c+1);
    }
    return e;
}
int main()
{

    long long int a,b;
    cin>>a>>b;
    vector<int>v(a);
    for(int i=0;i<a;i++)
    {

        cin>>v[i];
    }
    cout<<maxbooks(a,b,v)<<endl;
}
