// #include<iostream>
// #include<vector>
#include<bits/stdc++.h>
using namespace std;

// Brute Force Solution
// Time Complexity : O(N^3)
// Space Complexity : 
vector< vector<int> > findTriplets(int arr[], int n, int target) {

	vector< vector<int> > ans;
	for (int i = 0; i < n; i++) {

		for (int j = i + 1; j < n; j++) {

			for (int k = j + 1; k < n; k++) {

				if (arr[i] + arr[j] + arr[k] == target) {

					vector<int> temp;
					temp.push_back(arr[i]);
					temp.push_back(arr[j]);
					temp.push_back(arr[k]);

					sort(temp.begin(), temp.end());

					ans.push_back(temp);
				}
			}
		}
	}

	// sort(ans.beign(), ans.end());

	return ans;
}

// Time Complexity : O(N^2)
void print2DArray(vector< vector<int> > arr) {

	for (int i = 0; i < arr.size(); i++) {
		for (int j = 0; j < arr[i].size(); j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
}

int main() {
	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int target = 6;

	vector< vector<int> > triplets = findTriplets(arr, 10, target);

	print2DArray(triplets);

	return 0;
}