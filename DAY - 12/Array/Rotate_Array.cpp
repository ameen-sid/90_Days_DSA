#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int>& nums, int low, int high) {

	while (low < high) {

		swap(nums[low], nums[high]);
		low++;
		high--;
	}
}

// Reverse Approach
// Time Complexity = O(N)
void rotateArray(vector<int>& nums, int k) {

	int n = nums.size();

	// reverse full array
	reverse(nums, 0, n - 1);

	// reverse first part
	reverse(nums, 0, k - 1);
	// reverse second part
	reverse(nums, k, n - 1);
}

// Modulus Approach
// Time Complexity : O(N)
// Spaec Complexity : O(N)
void rotateArrayM(vector<int>& nums, int k) {

	int n = nums.size();
	vector<int> ans(n);

	for (int index = 0; index < n; index++) {

		int newIndex = (index + k) % n;
		ans[newIndex] = nums[index];
	}
	nums = ans;
}

// Time Complexity : O(N)
void printArray(vector<int> arr) {

	for (int val : arr)
		cout << val << " ";
	cout << endl;
}

int main() {
	vector<int> arr = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	int k;

	cout << "Enter the times to rotate array: ";
	cin >> k;

	cout << "Print array before rotating by " << k << " times" << endl;
	printArray(arr);

	rotateArray(arr, k);

	cout << "Print array after rotating by " << k << " times:\n";
	printArray(arr);

	return 0;
}