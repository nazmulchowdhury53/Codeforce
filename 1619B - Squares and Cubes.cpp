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

     cin>>a>>b>>c;
     //d =a+b+c;
     e= ((a+c-1)/c)*((b+c-1)/c);
    //d =((b+c-1)/c);
     cout<<e<<endl;
}
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

     cin>>a>>b;
     int ar[a];
     for(i=0;i<a;i++)
     {

         cin>>ar[i];
     }
     c=ar[b-1];
     d=0;
     for(i=0;i<a;i++)
     {
         if(ar[i]>=c && ar[i]>0)
         {

             d++;
         }
     }
        cout<<d<<endl;


}
