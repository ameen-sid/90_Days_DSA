#include<iostream>
#include<vector>
#include<unordered_map>
#include<limits>
using namespace std;

// Optimized Solution without STL
// Time Complexity = O(N)
// Space Complexity = O(N)
int firstRepElement(vector<int> nums) {

	// find maximum element
	int max = INT16_MIN;
	for (int i = 0; i < nums.size(); i++) {

		if (max < nums[i])
			max = nums[i];
	}

	// create a hashmap
	int hash[max + 1] = { 0 };

	for (int i = 0; i < nums.size(); i++)
		hash[nums[i]]++;

	for (int i = 0; i < nums.size(); i++) {

		if (hash[nums[i]] > 1)
			return i + 1;
	}
	return -1;
}

// Optimized Solution
// Time Complexity = O(N)
// Space Complexity = O(N)
int firstRepElementSTL(vector<int> nums) {

	unordered_map<int, int> hash;
	for (int i = 0; i < nums.size(); i++)
		hash[nums[i]]++;

	for (int i = 0; i < nums.size(); i++) {
		if (hash[nums[i]] > 1)
			return i + 1;
	}
	return -1;
}

// Brute Force Solution
// Time Complexity = O(N^2)
int firstRepElementB(vector<int> nums) {

	for (int i = 0; i < nums.size(); i++) {
		for (int j = i + 1; j < nums.size(); j++) {
			if (nums[i] == nums[j])
				return nums[i];
		}
	}
}

int main() {
	vector<int> arr = { 1, 5, 3, 4, 3, 5, 6 };

	cout << "The Position of First Repeating Element is: " << firstRepElement(arr);

	return 0;
}