#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll factorial(int n) {
    ll result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}
bool should_include(int number, ll n, ll d) {
    if (number == 1) return true;
    if (number == 3) return (n >= 3 || d % 3 == 0);
    if (number == 5) return (d == 5);
    if (number == 7) return (n >= 3 || (n == 2 && d == 7));
    if (number == 9) {
        if (n >= 6) return true;
        ll fact = factorial(n);
        return (fact * d) % 9 == 0;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        ll n, d;
        cin >> n >> d;

        vector<int>v = {1, 3, 5, 7, 9};
        vector<int> result;

        for (int number :v) {
            if (should_include(number, n, d)) {
                result.push_back(number);
            }
        }

        for (int num : result) {
            cout << num << " ";
        }
        cout << "\n";
    }

    return 0;
}
