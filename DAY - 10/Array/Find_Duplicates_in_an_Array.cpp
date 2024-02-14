#include<iostream>
using namespace std;

// Time Complexity : O(N)
int findDuplicate(int arr[], int n) {

	int ans = 0;
	for (int i = 0; i < n; i++)
		ans = ans ^ arr[i];

	for (int i = 1; i < n; i++)
		ans = ans ^ i;

	return ans;
}

int main() {
	int arr[10] = { 1, 3, 5, 2, 9, 7, 6, 8, 4, 3 };

	cout << "The Duplicate Element in the array is: " << findDuplicate(arr, 10);

	return 0;
}