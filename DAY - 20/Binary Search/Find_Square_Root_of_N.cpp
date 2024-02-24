#include<iostream>
#include<vector>
using namespace std;

// Time Complexity : O(log N)
long long int binarySearch(int n) {

	int start = 0;
	int end = n;

	long long int ans = -1;
	while (start <= end) {

		long long int mid = start + (end - start) / 2;
		long long int square = mid * mid;

		if (square == n)
			return mid;

		if (square < n) {
			ans = mid;
			start = mid + 1;
		}
		else {
			end = mid - 1;
		}
	}
	return ans;
}

// Time Complexity : O(log N)
int sqrtOfN(int n) {
	return binarySearch(n);
}

int main() {
	int n;

	cout << "Enter the value of n: ";
	cin >> n;

	cout << "The Square Root of " << n << " is: " << sqrtOfN(n) << endl;

	return 0;
}