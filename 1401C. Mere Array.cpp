#include<bits/stdc++.h>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;
int main()
{

    long long int a,b,c,d,e,i,j;
    cin>>a;

    while(a--)
    {

        cin>>b;
        vector<long long>v(b),vv(b);
        for(i=0;i<b;i++)

            cin>>v[i];
            vv=v;
            sort(vv.begin(),vv.end());
            e= *min_element(v.begin(), v.end());

            bool m= true;
            for(i=0;i<b;i++)
            {

                if(v[i]!=vv[i] && v[i]%e!=0)
                {
                    m=false;
                    break;
                }
            }




        cout<<(m ? "YES": "NO")<<endl;
    }
}
