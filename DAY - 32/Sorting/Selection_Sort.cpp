#include<iostream>
#include<vector>
using namespace std;

// Time Complexity : O(N^2)
void selectionSort(vector<int>& nums) {

	int n = nums.size();
	for (int i = 0; i < n - 1; i++) {
		int minIndex = i;
		for (int j = i + 1; j < n; j++) {
			if (nums[j] < nums[minIndex])
				minIndex = j;
		}
		swap(nums[i], nums[minIndex]);
	}
}

// Time Complexity : O(N)
void printArray(vector<int>& nums) {
	for (int val : nums)
		cout << val << " ";
	cout << endl;
}

int main() {
	vector<int> arr{ 9, 3, 2, 4, 1, 5, 7, 4, 2, 6, 7 };

	cout << "Print Array Before Sorting:\n";
	printArray(arr);

	selectionSort(arr);

	cout << "Print Array After Sorting:\n";
	printArray(arr);

	return 0;
}