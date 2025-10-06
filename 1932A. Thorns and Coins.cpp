#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin >> a;
    while (a--) {
        int b;
        cin >> b;
        string c;
        cin >> c;

        int d = 0;
        for (int i = 0; i < b; i++) {
            if (c[i] == '@') d++;
            if (i > 0 && c[i] == '*' && c[i-1] == '*')
                break;
        }
        cout << d <<endl;
    }
    return 0;
}
