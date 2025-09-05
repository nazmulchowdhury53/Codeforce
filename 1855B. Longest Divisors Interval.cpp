#include<bits/stdc++.h>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{

    long long int a, b,c,s,e,d,i,j;
    cin>>a;
    while(a--)
    {

        cin>>b;
        c=1;
        while(b%c==0)
        {

            c++;
        }
        cout<<(c-1)<<endl;
    }

}
