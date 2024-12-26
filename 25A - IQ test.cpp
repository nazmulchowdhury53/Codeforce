#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string.h>
using namespace std;
int main()
{

    long long int a,b=0,c=-1,d=0,e=-1,f,i,j,k;
    cin>>a;
    vector<int>v(a);
    for(i=0;i<a;i++)
    {

        cin>>v[i];
        if(v[i]%2==0)
        {
            b++;
            c=i+1;
        }
        else
        {
            d++;
            e=i+1;
        }


    }
    if(b==1)
    {
        cout<<c<<endl;
    }
    else
    {
        cout<<e<<endl;
    }
}
