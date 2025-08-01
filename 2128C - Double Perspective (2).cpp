

#include <bits/stdc++.h>
#define int long long
using namespace std;

struct BIT {
    int n;
    std::vector<int> fenw;

    BIT(int _n = 0) : n(_n), fenw(n + 1, 0) {}

    void init(int _n) {
        n = _n;
        fenw.assign(n + 1, 0);
    }

    void update(int idx) {
        for (; idx <= n; idx += idx & -idx)
            fenw[idx]++;
    }

    int query(int idx) const {
        int sum = 0;
        for (; idx > 0; idx -= idx & -idx)
            sum += fenw[idx];
        return sum;
    }
};

class InversionSolver {
    int n;
    std::vector<int> permutation, invRight, invLeft;

public:
    InversionSolver(int _n) : n(_n), permutation(n + 1), invRight(n + 1), invLeft(n + 1) {}

    void readInput() {
        for (int i = 1; i <= n; i++)
            cin >> permutation[i];
    }

    long long calculateInversions() {
        BIT bit(n);
        long long totalInversions = 0;

        bit.init(n);
        for (int i = n; i >= 1; i--) {
            invRight[i] = bit.query(permutation[i] - 1);
            totalInversions += invRight[i];
            bit.update(permutation[i]);
        }

        bit.init(n);
        for (int i = 1; i <= n; i++) {
            invLeft[i] = (i - 1) - bit.query(permutation[i]);
            bit.update(permutation[i]);
        }

        long long sumNegativeD = 0;
        for (int i = 1; i <= n; i++) {
            long long D = (n - i) - invRight[i] - invLeft[i];
            if (D < 0) sumNegativeD += D;
        }

        return totalInversions + sumNegativeD;
    }
};

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        InversionSolver solver(n);
        solver.readInput();
        cout << solver.calculateInversions() << "\n";
    }

    return 0;
}
