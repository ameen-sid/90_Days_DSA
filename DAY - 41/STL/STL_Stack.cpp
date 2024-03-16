#include<iostream>
// STL library of stack
#include<stack>
using namespace std;

int main() {
	// stack declaration
	stack<string> s;

	// push elements in the top of the stack
	s.push("one");
	s.push("two");
	s.push("three");

	// top function to access the top element of the stack
	cout << "Top Element: " << s.top() << endl;

	// pop function removes the topmost element from the stack
	s.pop();
	cout << "Top Element: " << s.top() << endl;

	// size function to check the size of the stack
	cout << "Size: " << s.size() << endl;

	// empty function to check that stack is empty or not
	cout << "Empty or not: " << s.empty() << endl;

	return 0;
}