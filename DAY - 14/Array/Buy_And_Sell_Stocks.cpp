#include<iostream>
#include<vector>
using namespace std;

// Time Complexity O(N)
int buyAndSellStocks(vector<int> prices) {

	int buyPrice = INT16_MAX;
	int maxProfit = 0;

	for (int i = 0; i < prices.size(); i++) {

		if (buyPrice < prices[i]) {
			int profit = prices[i] - buyPrice;
			maxProfit = max(maxProfit, profit);
		}
		else {
			buyPrice = prices[i];
		}
	}
	return maxProfit;
}

int main() {
	vector<int> prices = { 7, 1, 5, 3, 6, 4 };

	cout << "The Maximum Profit is: " << buyAndSellStocks(prices);

	return 0;
}