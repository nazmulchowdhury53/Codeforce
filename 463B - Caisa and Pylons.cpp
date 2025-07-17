#include <iostream>
#include <vector>
using namespace std;


int m(const vector<int>&he ) {
    int e = 0, c = 0, p = 0;
    for (int h : he ) {
        e += p - h;
        if (e < 0) {
            c += -e;
            e = 0;
        }
        p = h;
    }
    return c;
}

int main() {
    int n;
    cin >> n;

    vector<int> he(n);
    for (int i = 0; i < n; i++)
        cin >> he[i];

    cout << m(he) << endl;
    return 0;
}
