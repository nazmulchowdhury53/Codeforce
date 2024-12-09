#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
 vector<int> readCoins(int n) {
    vector<int> coins(n);
    for (int i = 0; i < n; ++i) {
        cin >> coins[i];
    }
    return coins;
}
 int calculateTotalSum(const vector<int>& coins) {
    int total_sum = 0;
    for (int coin : coins) {
        total_sum += coin;
    }
    return total_sum;
}
 int findMinimumCoins(const vector<int>& coins, int total_sum) {
    int current_sum = 0, count = 0;
    for (int coin : coins) {
        current_sum += coin;
        ++count;
        if (current_sum > total_sum / 2) {
            break;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
 vector<int> coins = readCoins(n);
 sort(coins.rbegin(), coins.rend());

     int total_sum = calculateTotalSum(coins);
  int result = findMinimumCoins(coins, total_sum);
  cout << result << endl;

    return 0;
}
