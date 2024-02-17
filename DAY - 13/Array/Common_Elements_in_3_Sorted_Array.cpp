#include<iostream>
#include<vector>
#include<set>
using namespace std;

// Time Complexity = O(N1) + O(N2) + O(N3)
// Space Complexity = O(min(N1 + N2 + N3))
vector<int> intersectionOfThree(vector<int> A, vector<int> B, vector<int> C) {

	vector<int> ans;
	set<int> st;

	int i, j, k;
	i = j = k = 0;
	while (i < A.size() && j < B.size() && k < C.size()) {

		if (A[i] == B[j] && B[j] == C[k]) {
			st.insert(A[i]);
			i++;
			j++;
			k++;
		}
		else if (A[i] < B[j]) {
			i++;
		}
		else if (B[j] < C[k]) {
			j++;
		}
		else {
			k++;
		}
	}

	for (auto item : st)
		ans.push_back(item);

	return ans;
}

void printArray(vector<int> arr) {

	for (int v : arr)
		cout << v << " ";
	cout << endl;
}

int main() {
	vector<int> a = { 1, 5, 10, 20, 40, 80 };
	vector<int> b = { 6, 7, 20, 80, 100 };
	vector<int> c = { 3, 4, 15, 20, 30, 70, 80, 120 };

	vector<int> intersection = intersectionOfThree(a, b, c);

	printArray(intersection);
}