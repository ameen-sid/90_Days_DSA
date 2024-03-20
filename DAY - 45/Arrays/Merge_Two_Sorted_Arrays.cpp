#include<iostream>
#include<vector>
using namespace std;

// Time Complexity : O(max(N, M))
void merge(vector<int>& arr1, vector<int>& arr2, vector<int>& arr3) {

	int i = 0, j = 0;
	int k = 0;
	while (i < arr1.size() && j < arr2.size()) {

		if (arr1[i] < arr2[j])
			arr3[k++] = arr1[i++];
		else
			arr3[k++] = arr2[j++];
	}

	while (i < arr1.size())
		arr3[k++] = arr1[i++];

	while (j < arr2.size())
		arr3[k++] = arr2[j++];
}

// Time Complexity : O(N)
void printArray(vector<int> arr) {

	for (int i : arr)
		cout << i << " ";
	cout << endl;
}

int main() {
	vector<int> arr1{ 1, 3, 5, 7, 9 };
	vector<int> arr2{ 2, 4, 6 };

	vector<int> arr3(8, 0);

	merge(arr1, arr2, arr3);

	printArray(arr3);

	return 0;
}