// #include<iostream>
// #include<vector>
#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O()
bool isPossibleSol(vector<int> stalls, int cows, int sol) {

	// can we place k cows, with atleast mid distance between cows
	int count = 1;
	int pos = stalls[0];

	for (int i = 1; i < stalls.size(); i++) {

		if (stalls[i] - pos >= sol) {
			count++;
			pos = stalls[i]; // one more cow has been placed.
		}

		if (count == cows)
			return true;
	}
	return false;
}

// Time Complexity : O()
int aggressiveCows(vector<int> stalls, int cows) {

	sort(stalls.begin(), stalls.end());

	int start = 0;
	int end = stalls[stalls.size() - 1] - stalls[0];

	int ans = -1;

	while (start <= end) {

		int mid = start + (end - start) / 2;

		if (isPossibleSol(stalls, cows, mid)) {
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
	vector<int> stalls{ 10, 1, 2, 7, 5 };
	int cows = 3;

	cout << "The Maximum Space between cows is: " << aggressiveCows(stalls, cows);

	return 0;
}