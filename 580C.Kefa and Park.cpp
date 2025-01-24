#include<bits/stdc++.h>
#include<math.h>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
const int MAXN = 100005;
vector<int> v[MAXN];
bool d[MAXN];
int a,b, result = 0;

void dfs(int m, int n, int g) {
    if (d[m])
        g++;
    else
        g = 0;

    if (g >b)
        return;

    bool k = true;
    for (int j : v[m]) {
        if (j != n) {
            k = false;
            dfs(j, m, g);
        }
    }

    if (k)
        result++;
}

int main() {
    cin >>a>>b;
    for (int i = 1; i <=a; i++)
        cin >> d[i];

    for (int i = 0; i <a - 1; i++) {
        int c,d;
        cin >> c >>d;
        v[c].push_back(d);
        v[d].push_back(c);
    }

    dfs(1, -1, 0);
    cout << result << endl;
    return 0;
}

