#include<iostream>
#include<vector>
using namespace std;

// Time Complexity : O(N)
int linearSearch(vector<int> nums, int k) {

	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] == k)
			return i;
	}
	return -1;
}

int main() {
	vector<int> arr{ 1, 2, 3, 4, 5, 6, 7 };

	int search;

	cout << "Enter the element to search: ";
	cin >> search;

	if (linearSearch(arr, search) == -1)
		cout << "Element is not present in the array.";
	else
		cout << "Elememt is present at index: " << linearSearch(arr, search);

	return 0;
}