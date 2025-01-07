#include <bits/stdc++.h>
#include <map>
#include <string>
using namespace std;
int main() {
 map<string, int> m;
    int n;
  cin >> n;

    while (n--) {
      string s;
        cin >> s;

        int& count =m[s];
        if (count == 0) {
           cout << "OK" <<endl;
        } else {
           cout <<s<< count <<endl;
        }
        count++;
    }


}
