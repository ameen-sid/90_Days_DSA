# <center>Functions</center>

A function is a self-contained block of code that performs a specific task or set of tasks. Functions are designed to be reusable and modular, allowing developers to break down a program into smaller, more manageable pieces.

---

### Function Declaration

The process of declaring a function is known as function declaration. It includes specifying the function's return type, name, its parameters (if any).

```c++
int addNumbers(int a, int b);
```

---

### Function Definition

The process of defining a function is known as function definition. It includes specifying the function's return type, name, its parameters (if any), and the code block that makes up the function.

```c++
void addNumbers(int a, int b) {
	return a + b;
}
```

---

### Function Call

To execute a function and perform its defined task, the function must be called. This is done by using the function name followed by parentheses, and providing any required arguments.

```c++
#include<iostream>
using namespace std;

int main() {
	int a = 5, b = 10;

	// Calling the function
	int sum = addNumbers(a, b);

	cout << "The sum of " << a << " and " << b << " is " << sum << endl;

	return 0;
}
```
