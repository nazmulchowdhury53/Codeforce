#include<bits/stdc++.h>
#include<vector>
#include<math.h>
#include<map>
#include<string.h>
using namespace std;
int main()
{

    long long int a,b,c,d,e,i,j;
    cin>>a;
    while(a--)
    {

        cin>>b;
        string s;
        cin>>s;
        c=0,d=0;
        for(char i:s)
        {
            if(i=='(')
            {
                c++;
            }
            else{
                c--;
            }
            d=min(d,c);
        }

        cout<<abs(d)<<endl;
    }
}
