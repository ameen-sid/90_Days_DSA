#include<iostream>
// STL library of queue
#include<queue>
using namespace std;

int main() {
	// queue declaration
	queue<string> q;

	// push elements in the queue
	q.push("one");
	q.push("two");
	q.push("three");

	// front function to access the first element of the queue
	cout << "First Element: " << q.front() << endl;

	// pop function remove the first element from the queue
	q.pop();
	cout << "First Element: " << q.front() << endl;

	// size function to check the size of queue
	cout << "Size: " << q.size() << endl;

	// empty function to check that the queue is empty or not
	cout << "Empty or not: " << q.empty() << endl;

	return 0;
}