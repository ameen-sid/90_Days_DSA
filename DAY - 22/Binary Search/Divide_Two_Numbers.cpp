#include<iostream>
using namespace std;

// Time Complexity : O(log N)
int getQuotient(int divisor, int dividend) {

	int start = 0;
	int end = dividend;
	int ans = -1;
	while (start <= end) {

		int mid = start + (end - start) / 2;

		if (mid * divisor == dividend)
			return mid;

		if (mid * divisor < dividend) {
			// store answer
			ans = mid;
			// go to right
			start = mid + 1;
		}
		else {
			// go to left
			end = mid - 1;
		}
	}
	return ans;
}

int main() {
	int divisor, dividend;

	cout << "Enter the divisor: ";
	cin >> divisor;

	cout << "Enter the dividend: ";
	cin >> dividend;

	int ans = getQuotient(abs(divisor), abs(dividend));

	// Now, we need to decide ke sign konsa lagaye +ve ya -ve
	if ((divisor < 0 && dividend > 0) || (divisor > 0 && dividend < 0))
		ans = 0 - ans;

	// 0 case
	if (dividend == 0)
		ans = 0;

	if (divisor == 0)
		cout << "Error! Division by zero is not allowed.";
	else
		cout << "Final Answer is: " << ans;

	return 0;
}