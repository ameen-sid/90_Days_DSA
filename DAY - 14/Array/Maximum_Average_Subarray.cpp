#include<iostream>
#include<vector>
#include<limits>
using namespace std;

// Optimized Solution (Sliding Window Method)
// Time Complexity : O(N)
double maxAverage(vector<int> arr, int k) {

	int i = 0;
	int j = k - 1;
	int sum = 0;

	for (int l = i; l <= j; l++)
		sum += arr[l];

	int maxSum = sum;
	j++;

	while (j < arr.size()) {
		sum -= arr[i++];
		sum += arr[j++];
		maxSum = max(maxSum, sum);
	}
	return (double)maxSum / k;
}

// Brute Force Solution
// Time Complexity : O(N^2)
double maxAverageB(vector<int> arr, int k) {

	int maxSum = INT16_MIN;
	int i = 0;
	int j = k - 1;

	while (j < arr.size()) {

		int sum = 0;
		for (int l = i; l <= j; l++)
			sum += arr[l];

		maxSum = max(maxSum, sum);
		i++;
		j++;
	}
	return ((double)maxSum / k);
}

int main() {
	vector<int> arr = { 1, 12, -5, -6, 50, 3 };
	int k;

	cout << "Enter the value of k: ";
	cin >> k;

	cout << "The Maximum Average of Subarray is: " << maxAverage(arr, k) << endl;

	return 0;
}