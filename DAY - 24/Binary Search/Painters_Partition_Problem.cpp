// #include<iostream>
// #include<vector>
#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(N)
bool isPossibleSol(int boards[], int N, int K, long long int sol) {

	long long int timeSum = 0;
	int painters = 1;

	for (int i = 0; i < N; i++) {

		if (boards[i] > sol)
			return false;

		if (timeSum + boards[i] > sol) {
			painters++;
			timeSum = boards[i];

			if (painters > K)
				return false;
		}
		else {
			timeSum += boards[i];
		}
	}
	return true;
}

// Time Complexity : O(N) + O(log N)
long long int paintersPartition(int boards[], int N, int K) {

	long long int start = 0;
	long long int end = accumulate(boards, boards + N, 0);
	long long int ans = -1;

	while (start <= end) {

		long long int mid = start + (end - start) / 2;

		if (isPossibleSol(boards, N, K, mid)) {
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
	int boards[5] = { 5, 10, 30, 20, 15 };
	int K = 3;

	cout << "The Minimum no of time are: " << paintersPartition(boards, 5, K) << endl;

	return 0;
}