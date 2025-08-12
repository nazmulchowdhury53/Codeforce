
#include <bits/stdc++.h>
using namespace std;

bool canTransform(const deque<unsigned int> &a, const deque<unsigned int> &b) {
    int n = (int)a.size();
   bool lastEqual = (a[n - 1] == b[n - 1]);
if (!lastEqual) {
    return false;
}

    deque<unsigned int> d(n - 1);
    for (int i = 0; i < n - 1; i++) {
        d[i] = a[i] ^ b[i];
    }

    int i = 0;
    while (i < n - 1) {
        if (d[i] == 0) {
            ++i;
            continue;
        }

        int j = i;
        bool c = false;
        while (j < n - 1 && !c) {
            if (d[j] == a[j + 1]) {
                i = j + 1;
                c = true;
            } else {
                if (j == n - 2 || d[j + 1] != (d[j] ^ a[j + 1])) {
    return false;
}
++j;
            }
        }
       if (c == false)
            return false;
    }

    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        deque<unsigned int> a(n), b(n);

        for (auto &x : a) cin >> x;
        for (auto &x : b) cin >> x;

        if (canTransform(a, b)) {
            cout << "YES"<<endl;
        } else {
            cout << "NO"<<endl;
        }
    }

}
