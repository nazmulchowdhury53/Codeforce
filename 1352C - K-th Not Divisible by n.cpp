#include<bits/stdc++.h>
#include<vector>
#include<math.h>
#include<map>
using namespace std;
int main()
{

    long long int a,b,c,d,e,i,j,f,g,h;
    cin>>a;
    while(a--)
    {

        cin>>b>>c;
        d=1,e=0,i=c+c/(b-1);
        while(d<=i)
        {
            f=(d +i)/2;
            g=f-f/b;
            if(g>=c)
            {

                e=f;
                i=f-1;
            }
            else
            {
                d=f+1;
            }
        }
        cout<<d<<endl;
    }
}
