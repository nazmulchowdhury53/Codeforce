/*
#include<bits/stdc++.h>
#include<string.h>
#include<math.h>
#include<vector>
#include<map>
using namespace std;
int main()
{

    long long int a,b,c,d,e,f,g,i,j
    string s;
    cin>>s;
    a=strlen(s);
    for(i=0;i<a;i++)
    {

        b=s[i]-'0';
        c=9-b;
        if(c<b && !(i==0 && c==0));
        {
            s[i]='0'+c;
        }
    }
    cout<<s<<endl;

}
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int a, b, c, i;
    string s;
    cin >> s;
    a = s.length();
    for (i = 0; i < a; i++) {
        b = s[i] - '0';
        c = 9 - b;
        if (c < b && !(i == 0 && c == 0)) {
            s[i] = '0' + c;
        }
    }
    cout << s << endl;
    return 0;
}
