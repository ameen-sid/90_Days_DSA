#include<iostream>
// STL library for priority queue
#include<queue>
using namespace std;

int main() {
	// max heap declaration with priority queue
	priority_queue<int> maxi;

	// min heap declaration with priority queue
	priority_queue<int, vector<int>, greater<int> > mini;

	// push elements to the max heap priority queue
	maxi.push(1);
	maxi.push(3);
	maxi.push(2);
	maxi.push(0);

	// print the elements of max heap priority queue
	cout << "Size: " << maxi.size() << endl;
	int n = maxi.size();
	for (int i = 0; i < n; i++) {
		cout << maxi.top() << " ";
		maxi.pop();
	}
	cout << endl;

	// push elements to the min heap priority queue
	mini.push(5);
	mini.push(1);
	mini.push(0);
	mini.push(4);
	mini.push(3);

	// print the elements of min heap priority queue
	int m = mini.size();
	for (int i = 0; i < m; i++) {
		cout << mini.top() << " ";
		mini.pop();
	}
	cout << endl;

	return 0;
}