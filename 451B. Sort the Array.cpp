#include<bits/stdc++.h>
#include<math.h>
#include<vector>
#include<map>
using namespace std;
int main()
{

    long long int a,b=0,c,e,i,j;
    cin>>a;
    int v[a];
    for(i=0;i<a;i++)
    {
        cin>>v[i];
    }
    c=a-1;
    while(b<c && v[b]<=v[b+1])
    {
        b++;
    }
    if(b==a-1)
    {

        cout<<"yes"<<endl;
        cout<<"1 1"<<endl;
        return 0;
    }
    while(0<c && v[c]>=v[c-1])
    {
        c--;
    }
    reverse(v+b,v+c+1);
    if(is_sorted(v,v+a))
    {

        cout<<"yes"<<endl;
        cout<<b+1<<" "<<c+1<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}
