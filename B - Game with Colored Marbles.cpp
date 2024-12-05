#include <bits/stdc++.h>
#include<algorithm>
#include<string>
#include <vector>
#include <map>
using namespace std;

int main() {
    int a,b,c,d,e;
    cin >> a;
    vector<int>v;

    while (a--) {

        cin >>b;
        vector<int> ar(b);
     for (int i = 0; i < b; i++) {
            cin >> ar[i];
        }

        unordered_map<int, int> freq;
        for (int num : ar) {
            freq[num]++;
        }
d = 0;
        for (const auto &entry : freq) {
            if (entry.second == 1) {
                d++;
            }
        }
  int ans = ((d + 1) / 2) * 2 + (freq.size() -d);
        v.push_back(ans);
    }
  for (int i :v) {
        cout << i << endl;
    }


}
