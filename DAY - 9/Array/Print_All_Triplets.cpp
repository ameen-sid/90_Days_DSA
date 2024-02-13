#include<iostream>
using namespace std;

// Time Complexity : O(N^3)
void printAllTriplets(int arr[], int n) {

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++)
				cout << "{ " << arr[i] << ", " << arr[j] << ", " << arr[k] << " }";
			cout << endl;
		}
	}
}

int main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	printAllTriplets(arr, 10);

	return 0;
}