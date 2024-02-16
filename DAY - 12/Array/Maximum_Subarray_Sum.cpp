#include<iostream>
using namespace std;

// Kadane's Algorithm
// Time Complexity : O(N)
int maxSumOfSubarray(int arr[], int n) {

	int maxSum = INT16_MIN;
	int currSum = 0;
	for (int i = 0; i < n; i++) {

		currSum = currSum + arr[i];
		if (currSum < 0)
			currSum = 0;

		maxSum = max(maxSum, currSum);
	}

	return maxSum;
}

// Prefix Sum Approach
// Time Complexity : O(N^2)
// Space Complexity : O(N)
int maxSumOfSubarrayP(int arr[], int n) {

	int* prefix = new int[n];
	prefix[0] = arr[0];
	for (int i = 1; i < n; i++)
		prefix[i] = prefix[i - 1] + arr[i];

	int currSum = 0;
	int maxSum = INT16_MIN;

	for (int i = 0; i < n; i++) {

		int start = i;
		for (int j = i; j < n; j++) {

			int end = j;
			currSum = (start == 0) ? prefix[end] : prefix[end] - prefix[start - 1];

			maxSum = max(maxSum, currSum);
		}
	}
	return maxSum;
}

// Brute Force Solution
// Time Complexity : O(N^3)
int maxSumOfSubarrayB(int arr[], int n) {

	int currSum = 0;
	int maxSum = INT16_MIN;

	for (int i = 0; i < n; i++) {

		int start = i;
		for (int j = i; j < n; j++) {

			int end = j;
			currSum = 0;
			for (int k = start; k <= end; k++)
				currSum += arr[k];

			maxSum = max(maxSum, currSum);
		}
	}
	return maxSum;
}

int main() {
	int arr[5] = { 1, 2, 3, 4, 5 };

	cout << "The Maximum Subarray Sum is: " << maxSumOfSubarray(arr, 5) << endl;

	return 0;
}