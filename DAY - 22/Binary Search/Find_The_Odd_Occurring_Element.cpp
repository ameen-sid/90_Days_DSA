#include<iostream>
#include<vector>
using namespace std;

// Time Complexity : O(log N)
int findOddOccurringElement(vector<int> arr) {

	int n = arr.size();

	int start = 0;
	int end = n - 1;

	while (start <= end) {

		int mid = start + (end - start) / 2;

		// Single Element Case
		if (start == end)
			return start;

		// Check mid is even or odd
		if (mid & 1) {	// true --> odd
			if (mid - 1 >= 0 && arr[mid - 1] == arr[mid])
				// goto right
				start = mid + 1;
			else
				// goto left
				end = mid - 1;
		}
		else { // false --> even
			if (mid + 1 < n && arr[mid] == arr[mid + 1])
				// goto right
				start = mid + 2;
			else
				// ya toh right per hai ya fir answer ke uper hai
				end = mid;
		}
	}
	return -1;
}

int main() {
	vector<int> arr{ 10, 10, 2, 2, 5, 3, 3, 5, 5, 6, 6, 7, 7 };

	cout << "The Odd Occurring Element is: " << arr[findOddOccurringElement(arr)];

	return 0;
}