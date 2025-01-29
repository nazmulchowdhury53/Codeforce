#include <iostream>
#include<map>
#include<string.h>
#include<algorithm>
#include<math.h>
#include <vector>

using namespace std;

void solve() {
    long long a;
    cin >>a;

    vector<long long>v;
    long long b = a;
   for (long long i = 2; i * i <=a; i++) {
        if (b % i == 0) {
            v.push_back(i);
            b /= i;
            break;
        }
    }
  for (long long i = 2; i * i <=a; i++) {
        if (b% i == 0 && i !=v[0]) {
            v.push_back(i);
            b /= i;
            break;
        }
    }
  if (v.size() < 2 || b <= 1 ||b == v[0] || b == v[1]) {
        cout << "NO"<<endl;
        return;
    }

    v.push_back(b);

    cout << "YES"<<endl;
    cout << v[0] << " " <<v[1] << " " <<v[2] <<endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
