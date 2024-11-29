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

    string s;
    cin>>a;
    e=0;

        while(a--)
    {


    cin>>s;
    if(s=="++X"||s=="X++")
    {

        e++;
    }
    else if(s=="--X"||s=="X--")
    {

        e--;
    }


    }
    cout<<e<<endl;
}
