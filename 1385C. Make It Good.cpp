#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{

    long long int a, b,c,d,e,j;
    cin>>a;
    while(a--)
    {

        cin>>b;
        vector<long long int>v(b);
        for(auto &i : v)
        {

            cin>>i;
        }
        c=b-1;
        while(c>0 && v[c-1]>=v[c])
        {

            c--;
        }
        while(c>0 && v[c-1]<=v[c])
        {

            c--;
        }
        cout<<c<<endl;
    }
}
