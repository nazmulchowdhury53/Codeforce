#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int s, n;
    cin >> s >> n;
    vector<pair<int, int>>v(n);

    for (int i = 0; i < n; ++i) {
        cin >>v[i].first >>v[i].second;
    }
sort(v.begin(),v.end());

    for (const auto& j : v) {
        if (s > j.first) {
            s +=j.second;
        } else {
            cout << "NO" << endl;
       return 0;
        }
    }

    cout << "YES" << endl;

}

