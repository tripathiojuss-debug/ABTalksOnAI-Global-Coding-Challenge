#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int n = prices.size();
        int profit, min_price = prices[0];
        for(int i = 1; i < n; i++) {
            profit = prices[i] - min_price;
            min_price = min(min_price, prices[i]);
            max_profit = max(max_profit, profit);
        }
        return max_profit;
    }
int main() {
    int n;
    cout << "Enter number of days: ";
    cin >> n;

    vector<int> prices(n);
    cout << "Enter prices for " << n << " days: ";
    for(int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    int result =maxProfit(prices);
    cout << "Maximum Profit: " << result << endl;

    return 0;
}