// #include<iostream>
// #include<vector>
#include<bits/stdc++.h>
using namespace std;

// Dutch National Flag Approach or Two Pointer Approach
// Time Complexity = O(N)
void MoveAllNegToLeft(vector<int>& nums) {

	int low = 0;
	int high = nums.size() - 1;
	while (low < high) {

		if (nums[low] < 0)
			low++;
		else if (nums[high] > 0)
			high--;
		else
			swap(nums[low], nums[high]);
	}
}

// Sorting Approach
// Time Complexity = O(N log N)
void MoveAllNegToLeftS(vector<int>& nums) {

	sort(nums.begin(), nums.end());
}

void printArray(vector<int> nums) {

	for (int val : nums)
		cout << val << " ";
	cout << endl;
}

int main() {
	vector<int> arr = { 0, 8, 3, 2, -1, -3, -5, 2, -4, 2, -9 };

	cout << "Print Array before moving all negative numbers left side of the array:\n";
	printArray(arr);

	MoveAllNegToLeft(arr);

	cout << "Print Array after moving all negative numbers left side of the array:\n";
	printArray(arr);

	return 0;
}