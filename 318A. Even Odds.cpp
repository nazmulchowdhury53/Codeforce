#include<bits/stdc++.h>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{

    long long int a,b,c,d,ei,j,k;
    cin>>a>>c;
    b=(a+1)/2;
    if(c<=b)
    {

        cout<<2*c-1<<endl;
    }
    else
    {

        cout<<2*(c-b)<<endl;
    }

}
