
#include<bits/stdc++.h>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;
int main()
{

    long long int a,b,c,d,r,i;
    if(!(cin>>a))
        return 0;
    while(a--)
    {

        cin>>c>>b;
        if(c%2==1)
        {

            cout<<1<<" "<<(c-1)/2<<" "<<(c-1)/2<<endl;
        }
        else
        {

            if(c%4==0)
            {

                cout<<c/2<<" "<<c/4<<" "<<c/4<<endl;
            }
            else
            {

                cout<<2<<" "<<(c-2)/2<<" "<<(c-2)/2<<endl;
            }
        }
    }
}
