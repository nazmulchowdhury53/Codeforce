#include<bits/stdc++.h>
#include<math.h>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;
#define ll long long
int main()
{

    int a;
    cin >>a;

    vector<ll> v(a);
    ll c = 0;
     for (int i = 0; i <a; i++) {
        cin >> v[i];
        c += v[i];
    }
 if (c% 3 != 0) {
        cout << 0 << endl;
        return 0;
    }

    ll d= c / 3;
    ll e = 0, f = 0, result = 0;
 for (int i = 0; i <a - 1; i++) {
        e += v[i];
  if (e == 2 * d) {
            result += f;
        }
 if (e== d) {
            f++;
        }
    }

    cout << result << endl;
    return 0;
}
