#include<bits/stdc++.h>
#include<math.h>
#include<vector>
#include<map>
using namespace std;
int main()
{

    long long int a,b= 1,c,i;
    string s;
    cin>>s;
    c=s.size();
    for(i=0;i<c;i++)
    {

        if(s[i]==s[i-1])
        {
            b++;
            if(b>=7)
            {
                cout<<"YES"<<endl;
                return 0;

            }
        }
            else
            {
                b=1;
            }

    }
    cout<<"NO"<<endl;
}
