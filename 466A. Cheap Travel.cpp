#include<bits/stdc++.h>
#include<math.h>
#include<vector>
#include<string>
#include<algorithm>
#include<map>
using namespace std;
int min(int m,int n)
{

    return m<n?m:n;
}
int main()
{

    long long int a,b,c,d,e,f,j,k,l,g,h;
    cin>>a>>b>>c>>d;
    e=a*d;
    f=((a+b-1)/b)*d;
    g=(a/b)*d+(a%b)*c;
    h=min(e,min(f,g));
    cout<<h<<endl;



}
