#include<iostream>
#include<vector>
using namespace std;

// Time Complexity : O()
double morePrecision(int n, int precision, int tempSol) {

	double factor = 1;
	double ans = tempSol;

	for (int i = 0; i < precision; i++) {

		factor = factor / 10;
		for (double j = ans; (j * j) < n; j = j + factor)
			ans = j;
	}
	return ans;
}

// Time Complexity : O(log N)
long long int sqrtInteger(int n) {

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

int main() {
	int n;

	cout << "Enter the value of n: ";
	cin >> n;

	long long int tempSol = sqrtInteger(n);
	cout << "Answer is " << morePrecision(n, 3, tempSol) << endl;

	return 0;
}