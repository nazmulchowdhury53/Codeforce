#include <iostream>
#include <string>
using namespace std;

int min_operations(int n, int m, int k, const string &s) {
    int operations = 0; // Count of Timar operations
    int i = 0;

    while (i < n) {
        // Count consecutive zeros starting from the current position
        int zero_count = 0;
        while (i < n && s[i] == '0') {
            zero_count++;
            i++;
            // If we've counted m zeros, apply Timar
            if (zero_count == m) {
                operations++;
                i += k - 1; // Skip the next k positions (strengthened by Timar)
                break;
            }
        }
        // Move to the next character if current character is not zero
        if (zero_count < m) i++;
    }

    return operations;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        string s;
        cin >> s;

        // Output the minimum number of operations for each test case
        cout << min_operations(n, m, k, s) << endl;
    }

    return 0;
}
