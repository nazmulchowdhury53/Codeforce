#include<bits/stdc++.h>
#include<math.h>
#include<vector>
#include<string.h>
#include<map>
#include<algorithm>

using namespace std;
int main()
{


   string s;
   cin>>s;
   bool c=0,b=0;
   for(int i=0;i<s.size();i++)
   {

       if(islower(s[i]))
       {
           c=1;
       }
   }
   for(char c:s)
   {

       if(islower(c))
       {
           b=1;
       }
   }
   if(c or b)
   {

       for(char& c:s)
       {
           if(islower(c))
           {
               c=toupper(c);
           }
           else {
            c=tolower(c);
           }
       }
   }
   cout<<s<<endl;
}
