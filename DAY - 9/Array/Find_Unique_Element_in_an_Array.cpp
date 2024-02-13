#include<iostream>
using namespace std;

// Time Complexity : O(N)
int findUnique(int arr[], int n) {

	int ans = 0;
	for (int i = 0; i < n; i++)
		ans = ans ^ arr[i];

	return ans;
}

int main() {
	int arr[9] = { 1, 2, 3, 5, 5, 4, 3, 2, 1 };

	cout << "The Unique Element in an array is: " << findUnique(arr, 9) << endl;

	return 0;
}