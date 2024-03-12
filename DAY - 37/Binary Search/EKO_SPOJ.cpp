#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Time Complexity : O(N)
bool isPossibleSol(vector<long long int>& trees, long long int woods, long long int mid) {

	long long int collectedWood = 0;
	for (long long int i = 0; i < trees.size(); i++) {

		if (trees[i] > mid)
			collectedWood += trees[i] - mid;
	}
	return collectedWood >= woods;
}

// Time Complexity : O(log N) + O()
long long int EKO(vector<long long int>& trees, long long int woods) {

	long long int start = 0;
	long long int end = *max_element(trees.begin(), trees.end());
	long long int ans = -1;
	while (start <= end) {

		long long int mid = start + (end - start) / 2;

		if (isPossibleSol(trees, woods, mid)) {
			ans = mid;
			start = mid + 1;
		}
		else {
			end = mid - 1;
		}
	}
	return ans;
}

int main() {
	vector<long long int> trees{ 20, 15, 10, 17 };
	long long int woods = 7;

	cout << "The Height of the Machine is: " << EKO(trees, woods) << " meters" << endl;

	return 0;
}