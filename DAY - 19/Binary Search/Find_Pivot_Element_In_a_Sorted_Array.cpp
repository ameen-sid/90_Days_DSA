#include<iostream>
#include<vector>
using namespace std;

// Time Complexity : O(log N)
int getPivot(vector<int> arr) {

	int n = arr.size();
	int start = 0;
	int end = n - 1;
	while (start <= end) {

		int mid = start + (end - start) / 2;

		// Corner case - Single element
		if (start == end)
			return start;

		if (mid + 1 < n && arr[mid] > arr[mid + 1])
			return mid;
		else if (mid - 1 >= 0 && arr[mid] < arr[mid - 1])
			return mid - 1;
		else if (arr[start] > arr[mid])
			end = mid - 1;
		else
			start = mid + 1;
	}
	return -1;
}

int main() {
	vector<int> arr{ 12, 14, 16, 2, 4, 6, 8, 10 };

	cout << "The Pivot Index is: " << getPivot(arr);

	return 0;
}