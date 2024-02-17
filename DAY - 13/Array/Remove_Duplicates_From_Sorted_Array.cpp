#include<iostream>
#include<vector>
using namespace std;

// Two Pointer Approach
// Time Complexity : O(N)
int removeDuplicates(vector<int>& arr) {

	int j = 0;
	int i = j + 1;
	while (i < arr.size()) {

		if (arr[j] == arr[i])	i++;
		else	arr[++j] = arr[i++];
	}
	return j + 1;
}

// Time Complexity : O(N)
void printArray(vector<int> arr) {

	for (int val : arr)
		cout << val << " ";
	cout << endl;
}

int main() {
	vector<int> arr = { 0, 0, 1, 1, 1, 2, 2, 3, 3, 4 };

	cout << "Print Array Before Removing Duplicates:\n";
	printArray(arr);

	cout << "The Unique Elements in the array is: " << removeDuplicates(arr) << endl;;

	cout << "Print Array After Removing Duplicates:\n";
	printArray(arr);

	return 0;
}