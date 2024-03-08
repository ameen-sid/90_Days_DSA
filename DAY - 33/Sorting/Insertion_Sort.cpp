#include<iostream>
#include<vector>
using namespace std;

// Time Complexity : O(N^2)
void insertionSort(vector<int>& nums) {

	int n = nums.size();
	for (int i = 1; i < n; i++) {
		int key = nums[i];
		int j = i - 1;
		while (j >= 0 && nums[j] > key) {
			nums[j + 1] = nums[j];
			j--;
		}
		nums[j + 1] = key;
	}
}

// Time Complexity : O(N)
void printArray(vector<int>& nums) {
	for (int val : nums)
		cout << val << " ";
	cout << endl;
}

int main() {
	vector<int> arr{ 4, 5, 7, 2, 1, 3, 5, 8, 6, 9, 3, 5 };

	cout << "Print Array Before Sorting:\n";
	printArray(arr);

	insertionSort(arr);

	cout << "Print Array After Sorting:\n";
	printArray(arr);

	return 0;
}