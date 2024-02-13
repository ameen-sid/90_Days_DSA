#include<iostream>
using namespace std;

// Time Complexity : O(N^3)
void printSubarrays(int arr[], int n) {

	for (int i = 0; i < n; i++) {

		int start = i;
		for (int j = i; j < n; j++) {

			int end = j;
			cout << "{ ";
			for (int k = start; k <= end; k++)
				cout << arr[k] << ", ";
			cout << " }";
		}
		cout << endl;
	}
}

int main() {
	int arr[5] = { 1, 2, 3, 4, 5 };

	cout << "Printing All Subarrays:\n";
	printSubarrays(arr, 5);

	return 0;
}