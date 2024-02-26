#include<iostream>
using namespace std;

// Time Complexity : O(log N)
int searchNearlySorted(int arr[], int n, int target) {

	int start = 0;
	int end = n - 1;

	while (start <= end) {

		int mid = start + (end - start) / 2;

		if (mid - 1 >= 0 && arr[mid - 1] == target)
			return mid - 1;

		if (arr[mid] == target)
			return mid;

		if (mid + 1 < n && arr[mid + 1] == target)
			return mid + 1;


		if (target > arr[mid])
			start = mid + 2;
		else
			end = mid - 2;
	}
	return -1;
}

int main() {
	int arr[] = { 20, 10, 30, 50, 40, 70, 60 };
	int n = 7;
	int target = 30;

	int targetIndex = searchNearlySorted(arr, n, target);

	if (targetIndex == -1)
		cout << "Element is found.";
	else
		cout << "Element found at index: " << targetIndex;

	return 0;
}