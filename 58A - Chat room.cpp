#include<bits/stdc++.h>
#include<vector>
#include<math.h>
#include<map>
#include<string.h>
using namespace std;
int main()
{

    long long int a,b,c,d=0,e,i,j;
   char s[101],ss[]="hello";
    cin>>s;
    a=strlen(s);
    for(i=0;i<a;i++)
    {
       if(s[i]==ss[d])

       {
           d++;
       }
       if(d==5)
       {
           break;
       }

    }
    if(d==5)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
