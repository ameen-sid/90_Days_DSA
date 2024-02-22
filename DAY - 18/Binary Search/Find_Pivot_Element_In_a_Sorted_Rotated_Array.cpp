#include<iostream>
#include<vector>
using namespace std;

int getPivot(vector<int> arr) {

	int start = 0;
	int end = arr.size() - 1;
	while (start < end) {

		int mid = start + (end - start) / 2;

		if (arr[mid] >= arr[0])
			start = mid + 1;
		else
			end = mid;
	}
	return start;
}

int main() {
	vector<int> arr{ 5, 6, 7, 1, 2, 3, 4 };

	cout << "The Pivot Index is: " << getPivot(arr);

	return 0;
}