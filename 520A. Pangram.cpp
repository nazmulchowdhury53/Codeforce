#include<bits/stdc++.h>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
   int n;
    char c[10001],ch;
    cin>>n>>c;
    int k[26]={0},d=1;
    for(int i=0;i<n;i++)
    {
        ch=tolower(c[i]);
        if(ch>='a' && ch<='z')
        {
            k[ch-'a']=1;
        }
    }
    for(int i=0;i<26;i++)
    {
        if(k[i]==0)
        {

            d=0;
            break;
        }
    }
    if(d==0)
    {

        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }

}
