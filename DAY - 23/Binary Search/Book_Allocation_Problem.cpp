// #include<iostream>
// #include<vector>
#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(N)
bool isPossibleSol(int books[], int N, int M, int sol) {

	int pageSum = 0;
	int students = 1;

	for (int i = 0; i < N; i++) {

		if (books[i] > sol)
			return false;

		if (pageSum + books[i] > sol) {
			students++;
			pageSum = books[i];

			if (students > M)
				return false;
		}
		else {
			pageSum += books[i];
		}
	}
	return true;
}

// Time Complexity : O(N) + O(log N)
int bookAllocation(int books[], int N, int M) {

	// Special case
	if (M > N)
		return -1;

	int start = 0;
	int end = accumulate(books, books + N, 0);
	int ans = -1;

	while (start <= end) {

		int mid = start + (end - start) / 2;

		if (isPossibleSol(books, N, M, mid)) {
			ans = mid;
			end = mid - 1;
		}
		else {
			start = mid + 1;
		}
	}
	return ans;
}

int main() {
	int books[4] = { 12, 34, 67, 90 };
	int M = 2;

	cout << "The Minimum no of pages are: " << bookAllocation(books, 4, M) << endl;

	return 0;
}