#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        vector<int> freq(21, 0);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }

        int max_score = 0;
         for (int i = 1; i <= 20; i++) {
            max_score += freq[i] / 2;
        }
        cout << max_score << endl;
    }

    return 0;
}
