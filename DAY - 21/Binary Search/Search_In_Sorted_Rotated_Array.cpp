#include<iostream>
#include<vector>
using namespace std;

// Time Complexity : O(log N)
int getPivot(vector<int>& arr) {

	int start = 0;
	int end = arr.size() - 1;
	while (start < end) {

		int mid = start + (end - start) / 2;

		if (arr[mid] >= arr[0])
			start = mid + 1;
		else
			end = mid;
	}
	return start;
}

// Time Complexity : O(log N)
int binarySearch(vector<int>& arr, int s, int e, int k) {

	int start = s, end = e;
	while (start <= end) {

		int mid = start + (end - start) / 2;

		if (arr[mid] == k)
			return mid;

		if (k < arr[mid])
			end = mid - 1;
		else
			start = mid + 1;
	}
	return -1;
}

// Time Complexity : O(log N)
int findPosition(vector<int>& arr, int k) {

	int n = arr.size();

	int pivot = getPivot(arr);

	if (k >= arr[pivot] && k <= arr[n - 1])
		return binarySearch(arr, pivot, n - 1, k);
	else
		return binarySearch(arr, 0, pivot - 1, k);
}

int main() {
	vector<int> arr{ 4, 5, 6, 7, 1, 2, 3 };

	int target = 3;

	cout << "The Index of Target(" << target << ") is: " << findPosition(arr, target);

	return 0;
}