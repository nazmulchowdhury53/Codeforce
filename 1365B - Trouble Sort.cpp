
#include <bits/stdc++.h>
using namespace std;

bool isSorted(const vector<int>& a) {
    for (int i = 1; i < a.size(); i++) {
        if (a[i] < a[i - 1]) return false;
    }
    return true;
}

int main() {
    int a,c,d,e,i,j,k;
    cin >>a;

    while (a--) {
         cin >>c;

        vector<int> aa(c), b(c);
        for ( i = 0; i <c; i++)
            cin >> aa[i];
        for ( i = 0; i <c; i++)
        cin >> b[i];

        if (isSorted(aa)) {
            cout << "YES"<<endl;
        } else {
            bool has0 = false, has1 = false;
            for (int x : b) {
                if (x == 0)
                    has0 = true;
                else
                 has1 = true;
            }
            if (has0 && has1)
                cout << "YES"<<endl;
            else
            cout << "NO"<<endl;
        }
    }

    return 0;
}
