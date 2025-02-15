#include <bits/stdc++.h>
#include<vector>
#include<map>
#include<string.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c,d,i,e,j;
    cin >>a;
    while (a--) {
        cin >>b>>c;
        vector<pair<int, int>>v;

        for ( i = 0; i < b; ++i) {
            string s;
            cin >> s;
            for (j = 0; j <c; ++j) {
                if (s[j] == '#') {
                    v.emplace_back(i + 1, j + 1);
                }
            }
        }

        int min_row = v[0].first;
        int max_row = v[0].first;
        int min_col = v[0].second;
        int max_col = v[0].second;

        for (const auto& [r, c] : v) {
            min_row = min(min_row, r);
            max_row = max(max_row, r);
            min_col = min(min_col, c);
            max_col = max(max_col, c);
        }

        d = (min_row + max_row) / 2;
      e = (min_col + max_col) / 2;

        cout <<d << " " << e <<endl;
    }

    return 0;
}
