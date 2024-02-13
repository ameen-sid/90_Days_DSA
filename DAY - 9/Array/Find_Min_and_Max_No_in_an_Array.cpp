#include<iostream>
#include<limits>
using namespace std;

// Time Complexity : O(N)
int getMax(int arr[], int n) {

	int max = INT16_MIN;
	for (int i = 0; i < n; i++) {

		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}

// Time Complexity : O(N)
int getMin(int arr[], int n) {

	int min = INT16_MAX;
	for (int i = 0; i < n; i++) {

		if (arr[i] < min)
			min = arr[i];
	}
	return min;
}

int main() {
	int arr[10] = { 34, 53, 23, 543, 32, 43, 3, 32, 12, 321 };

	cout << "The minimum element in an array is: " << getMin(arr, 10) << endl;
	cout << "The maximum element in an array is: " << getMax(arr, 10) << endl;

	return 0;
}