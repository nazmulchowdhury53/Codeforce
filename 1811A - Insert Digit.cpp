
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{

    long long int a,c,d,e,i,j;
    cin>>a;
    while(a--)
    {

        string s;
        cin>>c>>d>>s;

        bool k=false;
        for(i=0;i<c;i++)
        {

            if(s[i]-'0'<d){
                s.insert(i,1,d +'0');
                k=true;
                break;

            }
        }
        if(!k)
        {
            s +=(d + '0');
        }
        cout<<s<<endl;
    }
}
