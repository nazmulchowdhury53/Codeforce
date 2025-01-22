
#include <iostream>
using namespace std;

int minOperations(int n, int m) {
    int operations = 0;
    while (m > n) {
        if (m % 2 == 0) {
            m /= 2;
        } else {
            m += 1;
        }
        operations++;
    }
    return operations + (n - m);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << minOperations(n, m) << endl;
    return 0;
}
