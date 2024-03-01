#include<iostream>
#include<vector>
using namespace std;

// Time Complexity : O(N)
int majorityElement(vector<int>& nums) {

	int n = nums.size();

	int element = 0;
	int count = 0;

	for (int i = 0; i < n; i++) {

		if (count == 0)
			element = nums[i];

		if (element == nums[i])
			count++;
		else
			count--;
	}

	count = 0;
	for (int i = 0; i < n; i++) {

		if (element == nums[i])
			count++;
	}

	if (count > n / 2)
		return element;

	return -1;
}

int main() {
	vector<int> arr{ 1, 1, 1, 2, 2, 1, 2, 2, 2, 1, 1, 2, 1 };

	cout << "The Majority Element is: " << majorityElement(arr);

	return 0;
}