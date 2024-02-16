#include<iostream>
#include<vector>
using namespace std;

// Dutch Flag Algorithm
// Time Complexity : O(N)
void sortColors(vector<int>& nums) {

	int low = 0;
	int high = nums.size() - 1;
	int mid = 0;
	while (mid <= high) {

		if (nums[mid] == 0) {
			swap(nums[low++], nums[mid++]);
		}
		else if (nums[mid] == 2) {
			swap(nums[mid], nums[high--]);
		}
		else {
			mid++;
		}
	}
}

// Time Complexity : O(N)
void printArray(vector<int> arr) {

	for (int val : arr)
		cout << val << " ";
	cout << endl;
}

int main() {
	vector<int> arr = { 1, 2, 2, 1, 0, 0, 2, 1 };

	cout << "Printing array before sorting:\n";
	printArray(arr);

	sortColors(arr);

	cout << "Printing array after soting:\n";
	printArray(arr);

	return 0;
}