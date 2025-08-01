
#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

struct DSU {
    int n;
    vector<int> p;
    DSU(int _n): n(_n), p(n+1) {
        iota(p.begin(), p.end(), 0);
    }

    int find(int x) {
        return p[x] == x ? x : p[x] = find(p[x]);
    }

    bool unite(int a, int b) {
        a = find(a);
        b = find(b);
        if (a == b) return false;
        p[b] = a;
        return true;
    }
};

class MSTSolver {
private:
    struct Edge {
        int a, b, w, idx;
    };

    int n;
    list<Edge> edges;  // Using list instead of vector
    int maxNode;

public:
    MSTSolver() : n(0), maxNode(0) {}

    void readInput() {
        cin >> n;
        edges.clear();
        maxNode = 0;
        for (int i = 0; i < n; i++) {
            Edge e;
            cin >> e.a >> e.b;
            e.w = e.b - e.a;
            e.idx = i + 1;
            edges.push_back(e);
            maxNode = max({maxNode, e.a, e.b});
        }
    }

    void solve() {
        edges.sort([](const Edge& x, const Edge& y) {
            return x.w > y.w;
        });

        DSU dsu(maxNode);
        vector<int> ans;

        for (auto& e : edges) {
            if (dsu.unite(e.a, e.b)) {
                ans.push_back(e.idx);
            }
        }

        printAnswer(ans);
    }

    void printAnswer(const vector<int>& ans) {
        cout << ans.size() << endl;
        for (size_t i = 0; i < ans.size(); i++) {
            cout << ans[i] << (i + 1 < ans.size() ? ' ' : '\n');
        }
    }
};

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        MSTSolver solver;
        solver.readInput();
        solver.solve();
    }
    return 0;
}
