// #include<iostream>
// #include<vector>
#include<bits/stdc++.h>
using namespace std;

// Brute Force Solution
// Time Complexity : O(N^2)
// Space Complexity : 
vector< vector<int> > pairSum(int arr[], int n, int target) {

	vector< vector<int> > ans;

	for (int i = 0; i < n; i++) {

		for (int j = i + 1; j < n; j++) {

			if (arr[i] + arr[j] == target) {

				vector<int> temp;
				temp.push_back(min(arr[i], arr[j]));
				temp.push_back(max(arr[i], arr[j]));

				ans.push_back(temp);
			}
		}
	}

	sort(ans.begin(), ans.end());

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
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int target = 5;

	vector< vector<int> > pairs = pairSum(arr, 10, target);

	print2DArray(pairs);

	return 0;
}