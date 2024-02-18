// #include<iostream>
// #include<vector>
#include<bits/stdc++.h>
using namespace std;

// Optimized Solution
// Time Complexity = O(N logN)
bool keyPair(vector<int> arr, int key) {

	int n = arr.size();
	sort(arr.begin(), arr.end());

	int low = 0;
	int high = n - 1;

	while (low < high) {

		if (arr[low] + arr[high] == key)
			return true;
		else if (arr[low] + arr[high] < key)
			low++;
		else
			high--;
	}
	return false;
}

// Brute Force Solution
// Time Complexity = O(N^2)
bool keyPairB(vector<int> arr, int key) {

	int n = arr.size();
	for (int i = 0; i < n; i++) {

		for (int j = i + 1; j < n; j++) {
			if (arr[i] + arr[j] == key)
				return true;
		}
	}
	return false;
}

int main() {
	vector<int> arr = { 1, 5, 3, 12, 43, 6, 23, 12, 4, 56 };

	int key;

	cout << "Enter the key to match pairs: ";
	cin >> key;

	if (keyPair(arr, key))
		cout << "YES";
	else
		cout << "NO";

	return 0;
}