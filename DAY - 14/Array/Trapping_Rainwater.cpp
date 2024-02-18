#include<iostream>
#include<vector>
using namespace std;

// Time Complexity : O(N)
bool isDescending(vector<int> nums) {

	for (int i = 0; i < nums.size() - 1; i++) {
		if (nums[i] < nums[i + 1])
			return false;
	}
	return true;
}

// Time Complexity : O(N)
bool isAscending(vector<int> nums) {

	for (int i = 0; i < nums.size() - 1; i++) {
		if (nums[i] > nums[i + 1])
			return false;
	}
	return true;
}

// Time Complexity : O(N)
// Space Complexity : O(N^2)
int trappingRainwater(vector<int> height) {

	int size = height.size();

	// First Case
	if (size < 3)
		return 0;

	// Second Case
	if (isAscending(height) || isDescending(height))
		return 0;

	vector<int> leftMax(size, 0);
	vector<int> rightMax(size, 0);

	// Calculating leftMax
	for (int i = 0; i < size; i++) {

		if (i == 0)
			leftMax[i] = height[i];
		else
			leftMax[i] = max(leftMax[i - 1], height[i]);
	}

	// Calculating rightMax
	for (int i = size - 1; i >= 0; i--) {

		if (i == size - 1)
			rightMax[i] = height[i];
		else
			rightMax[i] = max(rightMax[i + 1], height[i]);
	}

	int totalWaterLvl = 0;
	for (int i = 0; i < size; i++) {
		int waterLvl = min(leftMax[i], rightMax[i]);
		totalWaterLvl += (waterLvl - height[i]);
	}
	return totalWaterLvl;
}

int main() {
	vector<int> height = { 4, 2, 0, 6, 3, 2, 5 };

	cout << "The Trapping Rainwater is: " << trappingRainwater(height) << endl;

	return 0;
}