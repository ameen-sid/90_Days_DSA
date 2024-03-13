#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Time Complexity : O(N * P)
bool isPossibleSol(vector<int>& cooksRanks, int& pratas, int mid) {

	int currPratas = 0; 	// initial cookes pratas
	for (int i = 0; i < cooksRanks.size(); i++) {

		int rank = cooksRanks[i];
		int j = 1;
		int timeTaken = 0;

		while (true) {

			if (timeTaken + j * rank <= mid) {
				currPratas++;
				timeTaken += j * rank;
				j++;
			}
			else {
				break;
			}
		}

		if (currPratas >= pratas)
			return true;
	}
	return false;
}

// Time Complexity : O(N * P log N)
int prataSpoj(vector<int>& cooksRanks, int& pratas) {

	int highestRanker = *max_element(cooksRanks.begin(), cooksRanks.end());

	int start = 0;
	int end = highestRanker * (pratas * (pratas + 1) / 2);

	int ans = -1;
	while (start <= end) {

		int mid = start + (end - start) / 2;

		if (isPossibleSol(cooksRanks, pratas, mid)) {
			ans = mid;
			end = mid - 1;
		}
		else {
			start = mid + 1;
		}
	}
	return ans;
}

int main() {
	vector<int> cooksRanks{ 1, 2, 3, 4 };
	int pratas = 10;
	int cooks = 4;

	cout << "The Minimum time taken by " << cooks << " cooks to make " << pratas << " pratas is: " << prataSpoj(cooksRanks, pratas) << endl;

	return 0;
}