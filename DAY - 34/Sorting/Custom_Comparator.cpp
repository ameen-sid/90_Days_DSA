// #include<iostream>
// #include<vector>
#include<bits/stdc++.h>
using namespace std;

bool myCompFor1stIndex(vector<int>& a, vector<int>& b) {
	// return a[1] < b[1];	// increasing order comparison by 1st index
	return a[1] > b[1];	// decreasing order comparison by 1st index
}

bool myComp(int& a, int& b) {
	// return a < b;	// increasing order comparison
	return a > b;	// decreasing order comparison
}

// Time Complexity : O(N^2)
void printMatrix(vector< vector<int> >& mat) {
	for (auto v : mat) {
		for (int val : v)
			cout << val << " ";
		cout << endl;
	}
}

// Time Complexity : (N)
void printArray(vector<int>& arr) {
	for (int val : arr)
		cout << val << " ";
	cout << endl;
}

int main() {
	// 1D Array/Vector
	vector<int> v{ 44, 55, 33, 11, 22 };
	// sort(v.begin(), v.end());	// increasing order sorting
	sort(v.begin(), v.end(), myComp);
	// printArray(v);

	// 2D Array/Vector
	vector< vector<int> > vv{
		{1, 44},
		{0, 55},
		{2, 33},
		{0, 22},
		{0, 11}
	};

	cout << "Here are the values:\n";
	printMatrix(vv);

	cout << "Sorted values by 1st index:\n";
	sort(vv.begin(), vv.end(), myCompFor1stIndex);
	printMatrix(vv);

	return 0;
}