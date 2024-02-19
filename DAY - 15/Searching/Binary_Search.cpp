#include<iostream>
#include<vector>
using namespace std;

// Time Complexity : O(log N)
int binarySearch(vector<int> nums, int k) {

	int start = 0;
	int end = nums.size() - 1;
	while (start <= end) {

		int mid = start + (end - start) / 2;

		if (nums[mid] == k)
			return mid;

		else if (nums[mid] < k)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return -1;
}

int main() {
	vector<int> arr{ 1, 2, 3, 4, 5, 6, 7 };

	int search;

	cout << "Enter the element to search: ";
	cin >> search;

	if (binarySearch(arr, search) == -1)
		cout << "Element is not present in the array.";
	else
		cout << "Elememt is present at index: " << binarySearch(arr, search);

	return 0;
}