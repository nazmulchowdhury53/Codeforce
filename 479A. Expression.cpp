#include<bits/stdc++.h>
#include<math.h>
#include<vector>
using namespace std;
int main()
{

    long long int a,b,c,d,e,i,j,f,g;
    cin>>a>>b>>c;
    d=a+(b*c);
    e=a*(b+c);
    f=a*b*c;
    g=(a+b)*c;
    j=a+b+c;
    vector<int>v={d,e,f,g,j};
    i=*max_element(v.begin(), v.end());
    cout<<i<<endl;

}
