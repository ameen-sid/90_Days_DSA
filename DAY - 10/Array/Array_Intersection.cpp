#include<iostream>
#include<vector>
#include<limits>
using namespace std;

// Optimized Solution
// Time Complexity : O(N)
// Space Complexity : O(N)
vector<int> arrayIntersection(int arr1[], int arr2[], int n, int m) {

	vector<int> ans;
	int i = 0, j = 0;
	while (i < n && j < m) {

		if (arr1[i] < arr2[j])
			i++;

		if (arr1[i] == arr2[j]) {
			ans.push_back(arr1[i]);
			i++;
			j++;
		}

		if (arr1[i] > arr2[j])
			j++;
	}
	return ans;
}

// Brute Force Solution
// Time Conplexity : O(N^2)
// Space Complexity : O(N)
vector<int> arrayIntersectionB(int arr1[], int arr2[], int n1, int n2) {

	vector<int> ans;
	for (int i = 0; i < n1; i++) {

		for (int j = 0; j < n2; j++) {

			if (arr1[i] < arr2[j])
				break;

			if (arr1[i] == arr2[j]) {
				ans.push_back(arr1[i]);
				arr2[j] = INT16_MIN;
				break;
			}
		}
	}
	return ans;
}

// Time Complexity : O(N)
void printArray(vector<int> intersection) {

	cout << "{";
	for (int elem : intersection)
		cout << elem << ", ";
	cout << "}";
}

int main() {
	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr2[8] = { 2, 3, 5, 8, 23, 34, 45, 56 };

	vector<int> intersection = arrayIntersection(arr1, arr2, 10, 8);

	printArray(intersection);

	return 0;
}