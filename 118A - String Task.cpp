#include<bits/stdc++.h>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;
int main()
{

    string a,b,d,e,i;
    cin>>a ;
   for(char c:a)
    {
       c=tolower(c);
       if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||c=='y' )
   {

       continue;
   }
   b+='.';
   b+=c;
    }
    cout<<b<<endl;
}
