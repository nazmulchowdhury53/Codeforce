#include<bits/stdc++.h>
#include<math.h>
#include<vector>
using namespace std;
int main()
{

    long long int a,b,c,i;
    cin>>a;
    while(a--)
    {

        string s;
        cin>>b>>s;
        c=0;
        for(char d:s)
        {

            if(d=='0')
                c++;

        }
        if(c==1 or (c%2==0))
        {

            cout<<"BOB"<<endl;
        }
        else
        {
            cout<<"ALICE"<<endl;
        }
    }
}

