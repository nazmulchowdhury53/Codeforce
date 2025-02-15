#include<bits/stdc++.h>
#include<math.h>
#include<vector>
using namespace std;
int main()
{

    long long int a,b,c,d,e;
    cin>>a;
    while(a--)
    {

        cin>>b;
        c=b%2020;
        d=b/2020;
        if(c<=d)
        {

            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}
