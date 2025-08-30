#include<bits/stdc++.h>
#include<math.h>
#include<vector>
using namespace std;
int main()
{
    long long int a,b,d,e,i,j;
    cin>>a;
    while(a--)
    {
        cin>>b;
        vector<int> v[10];

        for(i=0;i<b;i++)
        {
            int c;
            cin>>c;
            c%=10;
            if((int)v[c].size()<3)
                v[c].push_back(c);
        }

        vector<int> vv;
        for(i=0;i<10;i++)
        {
            for(int c:v[i])
                vv.push_back(c);
        }

        bool ok=false;
        int m=vv.size();
        for(i=0;i<m;i++)
        {
            for(j=i+1;j<m;j++)
            {
                for(int k=j+1;k<m;k++)
                {
                    if((vv[i]+vv[j]+vv[k])%10==3)
                    {
                        ok=true;
                    }
                }
            }
        }
        cout<<(ok? "YES\n" : "NO\n");
    }
}
