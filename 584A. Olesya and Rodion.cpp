#include<bits/stdc++.h>
#include<math.h>
#include<vector>
#include<string.h>
using namespace std;
int main()
{

    long long int a,b,c,i;
    cin>>a>>b;
    if(a==1 && b==10)
    {

        cout<<-1<<endl;
        return 0;
    }
    else if(a==1)
    {
        cout<<b<<endl;
        return 0;
    }
    else{
        cout<<b;
        for(i=1;i<a;i++)
        {
            cout<<0;
        }
        cout<<endl;
    }
}
