#include<iostream>
#include<vector>
using namespace std;

// Sorting + Swapping Approach
// Time Complexity = O(N)
void findMissingNumber(vector<int> nums) {

	int i = 0;
	while (i < nums.size()) {

		int index = nums[i] - 1;
		if (nums[i] != nums[index])
			swap(nums[i], nums[index]);
		else
			i++;
	}

	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] != i + 1)
			cout << i + 1 << " ";
	}
}

// Visited Approach
// Time Complexity = O(N)
void findMissingNumberV(vector<int> nums) {

	for (int i = 0; i < nums.size(); i++) {
		int index = abs(nums[i]);
		if (nums[index - 1] > 0)
			nums[index - 1] *= -1;
	}

	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] > 0)
			cout << i + 1 << " ";
	}
}

int main() {
	vector<int> arr = { 1, 3, 5, 3, 4 };

	cout << "The Missing Number is: ";
	findMissingNumber(arr);

	return 0;
}