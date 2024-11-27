#include <iostream>
#include <string>
using namespace std;

int main() {

   long long int a,b=0,c=0,d,i;
   string s;
   cin>>a>>s;
   for(i=0;i<a;i++)
   {

       if(s[i]=='A')
       {
           b++;
       }
       else if(s[i]=='D')

       {
           c++;
       }
   }
   if(b==c)
   {

       cout<<"Friendship"<<endl;
   }
   else if(b>c)
   {
       cout<<"Anton"<<endl;
   }
   else
    cout<<"Danik"<<endl;
}

