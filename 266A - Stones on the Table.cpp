#include<bits/stdc++.h>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;
int main()
{

    long long int a,b,d,e,c=0;
    char s[51];
    cin>>a>>s;
   for(int i=0;i<a-1;i++)
    {

       if(s[i]==s[i+1] )
   {

      c++;
   }

    }
    cout<<c<<endl;
}
