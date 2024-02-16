#include<iostream>
#include<vector>
using namespace std;

// Time Complexity : O(N)
int missingNumber(vector<int>& nums) {

	int n = nums.size();
	int sum = 0;

	for (int i = 0; i < n; i++)
		sum += nums[i];

	int totalSum = ((n) * (n + 1)) / 2;

	return totalSum - sum;
}

int main() {
	vector<int> arr = { 3, 0, 1 };

	cout << "The Missing Number in an array is: " << missingNumber(arr);

	return 0;
}