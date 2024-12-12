#include<bits/stdc++.h>
#include<math.h>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{

    long long int a,b,x,c,e,f,j,k,l;
    cin>>a;
    vector<int>v(a);
    for(int i=0;i<a;i++)
    {

        cin>>v[i];
    }
    sort(v.begin(),v.end());
    cin>>b;
    while(b--)
    {

        cin>>c;
       auto d=upper_bound(v.begin(),v.end(),c);
        e=d-v.begin();
        cout<<e<<endl;
    }
}
