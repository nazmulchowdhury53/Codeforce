#include<bits/stdc++.h>
#include<math.h>
#include<string.h>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
int main()
{

    long long int a,b,c,d,e,i,j;

    string s;
    cin>>a;
    while(a--)
    {

        cin>>s;
        b=s.size();
       if(b>10)
       {

           cout<<s[0]<<b-2<<s[b-1]<<endl;
       }
       else
        cout<<s<<endl;
    }
}

