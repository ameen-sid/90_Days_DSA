# <center>Type Casting</center>

Allows you to change the data-type of a variable from one type to another.

Crucial when you need to perform operations involving variables of different data-types, ensuring that the data is handled correctly.

<br>

### Implicit Type Casting

Aka, Automatic Type Conversion

Compiler automatically convert one data-type to another during an operation.

This happens when you perform operations involving variables of different data-types, and the compiler promotes one type to a larger type to maintain precision.

<br>

### Explicit Type Casting

Aka, Manual Type Conversion

Allows you to explicitly specify the desired data-type during an assignment or operation.

You see the casting operator, which is represented by parantheses containing the target data-type.

<br>

### Bonus

-   int / int = int
-   float / int = float
-   int / float = float

<br>
<hr>
<br>

### Code

```c++
#include<iostream>
using namespace std;

int main() {
	// IMPLICIT CASTING
	// 1. int to float
	int num1 = 10;
	float num2 = 5.5;
	float result = num1 + num2; // Implicit conversion of num1 from int to float
	cout << result << endl;

	// 2. char to int
	char ch = 'A';
	int a = ch + 1; // Implicit conversion from char to int
	cout << a << endl;

	// 3. int to char
	int a = 97;
	char ch = a; // Implicit conversion from int to char
	cout << ch << endl;


	// EXPLICIT CASTING
	// 1. double to int
	double pi = 3.14159265;
	int intPi = (int)pi; // Explicit conversion from double to int
	cout << intPi << endl;

	// 2. float to char
	float floatingNumber = 65.35;
	char charValue = (char)floatingNumber; // Explicit conversion from float to char
	cout << charValue << endl;

	// 3. int to float
	int a = 10;
	float b = 3.0;
	float c = a / b; // Explicit conversion from int to float
	cout << c << endl;

	return 0;
}
```
