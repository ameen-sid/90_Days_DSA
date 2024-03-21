#include<iostream>
#include<vector>
using namespace std;

// Time Complexity : O(N)
void moveZeros(vector<int>& arr) {

	int nonZero = 0;
	for (int i = 0; i < arr.size(); i++) {

		if (arr[i] != 0)
			swap(arr[i], arr[nonZero++]);
	}
}

// Time Complexity : O(N)
void printArray(vector<int> arr) {

	for (int i : arr)
		cout << i << " ";
	cout << endl;
}

int main() {
	vector<int> arr{ 0, 1, 0, 3, 12, 0 };

	cout << "Print array before move zeros:\n";
	printArray(arr);

	moveZeros(arr);

	cout << "Print array after move zeros:\n";
	printArray(arr);

	return 0;
}