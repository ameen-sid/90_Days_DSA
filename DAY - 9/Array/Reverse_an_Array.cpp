#include<iostream>
using namespace std;

// Time Complexity : O(N)
void reverseArray(int arr[], int n) {

	int start = 0;
	int end = n - 1;
	while (start < end)
		swap(arr[start++], arr[end--]);
}

// Time Complexity : O(N)
void printArray(int arr[], int n) {
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	cout << "Printing array before reversing it:\n";
	printArray(arr, 10);

	reverseArray(arr, 10);

	cout << "Print array after reversing it:\n";
	printArray(arr, 10);

	return 0;
}