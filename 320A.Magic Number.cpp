#include<bits/stdc++.h>
#include<math.h>
#include<string.h>
using namespace std;
bool i(const string &s)
{

    for(char j  : s )
    {

        if(j!= '1' && j!='4')
            return false;
        if(s[0]=='4')
        {

        return false;

        }
        if(s.find("444")!= string::npos)
        {
            return false;
        }

    }
     return true;
}
int main()
{

    string s;
    cin>>s;
    cout<<(i(s)?"YES" : "NO")<<endl;

}
