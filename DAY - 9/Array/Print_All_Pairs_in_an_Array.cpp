#include<iostream>
using namespace std;

// Time Complexity : O(N^2)
void printAllPairs(int arr[], int n) {

	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++)
			cout << "{ " << arr[i] << ", " << arr[j] << " }";
		cout << endl;
	}
}

int main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	printAllPairs(arr, 10);

	return 0;
}