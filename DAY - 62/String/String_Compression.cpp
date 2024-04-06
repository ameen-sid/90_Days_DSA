#include<iostream>
#include<vector>
using namespace std;

// Time Complexity : O(N)
int compress(vector<char>& chars) {

	int i = 0;
	int ansIndex = 0;
	int n = chars.size();
	while (i < n) {

		int j = i + 1;
		while (j < n && chars[i] == chars[j])
			j++;

		chars[ansIndex++] = chars[i];

		int count = j - i;
		if (count > 1) {
			string cnt = to_string(count);
			for (char ch : cnt)
				chars[ansIndex++] = ch;
		}
		i = j;
	}
	return ansIndex;
}

int main() {
	vector<char> v{ 'a', 'a', 'b', 'b', 'c', 'c', 'c' };

	cout << "Original String: ";
	for (char c : v)
		cout << c << " ";
	cout << endl;

	int n = compress(v);

	cout << "Compressed String: ";
	for (int i = 0; i < n; i++)
		cout << v[i] << " ";
	cout << endl;

	return 0;
}