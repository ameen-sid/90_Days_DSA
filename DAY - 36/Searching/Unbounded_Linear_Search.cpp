#include<iostream>
#include<vector>
using namespace std;

// Time Complexity : O(M)
int unboundedLinearSearch(vector<int> nums, int target) {

	int i = 0;
	while (true) {

		if (nums[i] > target)
			break;

		else if (nums[i] == target)
			return i;

		i++;
	}
	return -1;
}

int main() {
	vector<int> arr{ 3, 4, 5, 6, 11, 13, 14, 15, 56, 70 };
	int target = 56;

	cout << "Index is: " << unboundedLinearSearch(arr, target) << endl;

	return 0;
}