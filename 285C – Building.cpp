#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int& x : a)
    cin >> x;

    sort(a.begin(), a.end());

    long long s = 1;
    for (int i = 0; i < n; i++) {
        s += abs(a[i] - (i + 1));
    }

    cout << s << endl;

}
