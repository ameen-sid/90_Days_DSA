#include<iostream>
#include<vector>
using namespace std;

// Time Complexity : O(N^2)
void bubbleSort(vector<int>& nums) {

	int n = nums.size();
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (nums[j] > nums[j + 1])
				swap(nums[j], nums[j + 1]);
		}
	}
}

// Time Complexity : O(N)
void printArray(vector<int>& nums) {
	for (int val : nums)
		cout << val << " ";
	cout << endl;
}

int main() {
	vector<int> arr{ 3, 4, 1, 2, 6, 8, 4, 7, 8, 3, 2 };

	cout << "Print Array Before Sorting:\n";
	printArray(arr);

	bubbleSort(arr);

	cout << "Print Array After Sorting:\n";
	printArray(arr);

	return 0;
}