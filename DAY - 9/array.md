# Array

### What is Array?

An array is a collection of elements, each identified by an index or a key. The elements are stored in contiguous memory locations, and the index serves as a reference to access a specific element within the array. The elements in an array are of the same data type, and the size of the array is typically fixed when it is declared.

Arrays provide efficient and direct access to elements based on their index. This direct access allows for constant-time retrieval of elements, making arrays a fundamental and widely used data structure in computer science.

### Declaration of Array

Declaration refers to the process of announcing the characteristics of the array, such as its data type and size.

```c++
// datatype arrayName[size];
int myArray[5];
```

### Initialization of Array

Initialization is the assignment of initial values to the elements of the array at the time of declaration.

```c++
// datatype arrayName[size] = {element1, element2, ..., elementN};
int myArray[5] = {0, 1, 2, 3, 4};
```

### Indexing of Array

Indexing refers to the process of accessing individual elements within the array using their position (index).

```c++
// Accessing element in the array using indeces
int elementAtIndex2 = myArray[2];
```

<br>

### Address calculation of an Array

The address calculation of an array involves determining the memory address of its elements. In most programming languages, arrays store elements in contiguous memory locations. The address calculation is typically based on the starting address of the array and the index of the desired element.

In general, the formula for calculating the address of an element arr[i] in an array is:

```c++
arr[i] = value at (base address + (index * data type size))
```

---

<br>

## Two Pointer Approach

The `two-pointer approach` is a technique commonly used in computer programming to solve problems that involve iterating through a data structure with two pointers, often from different ends or at different speeds. This approach is particularly useful in scenarios like searching for a pair of elements, determining if a condition is met, or optimizing time and space complexity.

<br>

## Dutch Flag Algorithm

The `Dutch National Flag algorithm`, also known as the `Dutch National Flag problem` or simply the `Dutch Flag algorithm`, is a sorting algorithm designed to sort an array containing only three distinct values, often represented by colors. It was named after the Dutch national flag, which consists of three horizontal bands of color: red, white, and blue.

The problem was originally formulated by `Edsger Dijkstra`, a Dutch computer scientist, as a programming exercise. The algorithm efficiently sorts an array containing only three unique values, partitioning the array into three sections: elements less than the pivot value (e.g., red), elements equal to the pivot value (e.g., white), and elements greater than the pivot value (e.g., blue).

<br>

## 2D Array

A 2D array, or two-dimensional array, is a data structure that represents a matrix or a table with rows and columns. Unlike a one-dimensional array, which is a linear collection of elements, a 2D array is arranged in rows and columns, forming a grid-like structure. Each element in a 2D array is uniquely identified by its row and column indices.

### Declaration of 2D Array

A 2D array can be declared as follows:

```c++
array[row][column]
```

For example, if we have a 2-dimensional array `myArray` with 3 rows and 4 columns, it would look like this:

```c++
// declares a 2D array named 'myArray' with 3 rows and 4 columns.

int myArray[3][4];

// Each row contains 4 integers. So, there will be total 12 integer variables.
```

> **Note:** When declaring a 2D array in you typically need to specify the size of the columns. The column size is mandatory in the declaration to define the dimensions of the array.

### Initialization of 2D Array

You can initialize each individual element or you can use loops to assign values to all elements simultaneously.

Each element of a 2D array should be initialized separately using its corresponding index. For example:

```c++
int matrix[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
};
```

### Accessing Element in 2D Array

-   Elements in a 2D array are accessed using both row and column indices.

-   Example: `int value = matrix[1][2];` accesses the element in the second row and third column of the matrix.

<br>

### 2D Array with Functions

Working with 2D arrays in functions involves passing the array as an argument and performing operations on its elements. Below is an example in C++ to illustrate how you can work with a 2D array in a function:

```c++
#include<iostream>
using namespace std;

// Function to display a 2D array
void displayMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j];
        }
        cout << endl;
    }
}

int main() {
    // Declare and initialize a 3x4 matrix
    int myMatrix[3][4] = {
		{1, 2, 3, 4},
    	{5, 6, 7, 8},
		{9, 10, 11, 12}
	};

    // Call the function to initialize the matrix
    initializeMatrix(3, 4, myMatrix);

    // Call the function to display the matrix
    cout << "Initialized Matrix:\n";
    displayMatrix(3, 4, myMatrix);

    return 0;
}
```

---

<br>

## Standart Template Library (STL)

The Standard Template Library (STL) provides a collection of template classes and functions that offer common data structure and algorithm to make programming more efficient and convenient.

---

<br>

## Vector

A Vector in C++ is a dynamic array that can grow or shrink in size, making it a versatile and efficient data structure for storing and manipulating sequences of elements.

<br>

## Features of Vector

Vectors in C++ provide several features and advantages that make them a versatile and widely used data structure. Here are some key features of `std::vector` in C++:

1. Dynamic Size:
    - Vectors can dynamically resize themselves to accommodate a varying number of elements. This allows for flexibility in memory usage.
2. Random Access:
    - Elements in a vector can be accessed randomly using indices. This provides fast and constant-time access to any element in the vector.
3. Contiguous Memory:
    - The elements in a vector are stored in contiguous memory locations. This property supports efficient memory access and is especially beneficial in algorithms that require sequential traversal.
4. Automatic Memory Management:
    - Vectors automatically handle memory allocation and deallocation. They grow or shrink as needed, and users do not need to manage memory manually.
5. Dynamic Memory Allocation:
    - Vectors allocate memory dynamically, allowing them to adapt to the size of the data they hold. This contrasts with fixed-size arrays where the size is determined at compile-time.
6. Efficient Insertion and Deletion:
    - While inserting or deleting elements, vectors provide efficient operations, especially when elements are added or removed from the end (using `push_back` or `pop_back`).
7. Range-Based for Loop Support:
    - Vectors can be easily used with range-based for loops, simplifying iteration over the elements.
8. Standard Template Library (STL) Functions:
    - Vectors are part of the C++ Standard Template Library (STL), providing a rich set of functions and algorithms. This includes sorting, searching, and other operations that can be applied to vectors.
9. Iterator Support:
    - Vectors support iterators, allowing traversal through the elements in a manner similar to pointers. This is useful for algorithms that need to operate on a sequence of elements.
10. Ease of Use:
    - Vectors are easy to use and implement. They abstract away much of the complexity associated with managing dynamic arrays manually.
11. Compatibility with Algorithms:
    - Vectors seamlessly work with various algorithms from the STL, providing a consistent and standard interface for working with data.
12. Safety and Abstraction:
    - Vectors offer safety features, such as bounds checking through the `at` function, which helps avoid common errors associated with manual array manipulation.

<br>

### Declaration of Vector

To declare a vector, you need to include the `<vector>` header and use the `std::vector` template class. Here's an example:

```c++
#include<iostream>
#include<vector>
using namespace std;

int main() {
    // Declaration of an empty vector of integers
    vector<int> myVector;

    // Declaration of a vector of integers with an initial size of 5
    vector<int> anotherVector(5);

    return 0;
}
```

### Initialization of Vector

You can initialize a vector during declaration or later using various methods. Here are a few examples:

```c++
#include<iostream>
#include<vector>
using namespace std;

int main() {
    // Initialization during declaration
    vector<int> initializedVector = {1, 2, 3, 4, 5};

    // Initialization using push_back
    vector<int> dynamicVector;
    for (int i = 0; i < 5; ++i) {
        dynamicVector.push_back(i * 2);
    }

    return 0;
}
```

With this example you can initialize vector of `5 size` with all value `-1`.

```c++
vector<int> v(5, -1);
```

### Indexing of Vector

Vectors in C++ use 0-based indexing, similar to arrays. You can access elements using the square bracket notation:

```c++
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> myVector = {10, 20, 30, 40, 50};

    // Accessing and printing elements
    cout << "Element at index 2: " << myVector[2] << endl;

    return 0;
}
```

Remember that unlike arrays, vectors in C++ automatically manage their own memory, making them a more flexible and safer alternative for dynamic arrays.

---

<br>

## ForEach loop with Vector

You can use a range-based for loop to iterate over the elements of a vector using a simpler syntax. This is often referred to as a "forEach" loop. Here's an example:

```c++
#include<iostream>
#include<vector>
using namespace std;

int main() {
    // Creating a vector
    vector<int> arr = {1, 2, 3, 4, 5};

    // Using a range-based for loop (forEach) to iterate over the elements
    cout << "Elements of the vector: ";
    for(int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
```

In this example, the range-based for loop iterates over each element in `arr`, and the variable `num` takes on the value of each element in turn. The loop then prints each element to the console.

---

<br>

## Vector Built-in Functions

### Size:

Returns the number of elements in the vector.

```c++
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr(5, 10);

    cout << "Size of the vector: " << arr.size() << endl;

    return 0;
}
```

### Capacity:

Returns the number of elements that the vector can hold without reallocation.

```c++
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr;

    cout << "Capacity of the vector: " << arr.capacity() << endl;

    return 0;
}
```

### Push Back:

Adds an element to the end of the vector.

```c++
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {10, 20, 30};

    // Adding element at the end using push_back
    arr.push_back(40);

    cout << "Updated vector: ";
    for(int num : arr) {
        cout << num << " ";
    }

    return 0;
}
```

### Pop Back:

Removes the last element from the vector.

```c++
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {10, 20, 30, 40};

    // Removing the last element using pop_back
    arr.pop_back();

    cout << "Updated vector: ";
    for (int num : myVector) {
        cout << num << " ";
    }

    return 0;
}
```

### At:

Accesses the element at a specified position with bounds checking.

```c++
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {10, 20, 30, 40};

    cout << "Element at position 2: " << arr.at(2) << endl;

    return 0;
}
```

### Empty:

Checks if the vector is empty.

```c++
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr;

    if (arr.empty()) {
        cout << "Vector is empty." << endl;
    } else {
        cout << "Vector is not empty." << endl;
    }

    return 0;
}
```

### Clear:

Removes all elements from the vector.

```c++
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {10, 20, 30, 40};

    // Clearing all the elements in the vector
    arr.clear();

    cout << "Vector after clearing: ";
    for (int num : myVector) {
        cout << num << " ";
    }

    return 0;
}
```

### Front:

Accesses the first element of the vector.

```c++
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {10, 20, 30, 40};

    cout << "First element of the vector: " << arr.front() << endl;

    return 0;
}
```

### Back:

Accesses the last element of the vector.

```c++
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {10, 20, 30, 40};

    cout << "Last element of the vector: " << arr.back() << endl;

    return 0;
}
```

> **Note:** For Referrence go to the [Vector CPP Referrence](https://en.cppreference.com/w/cpp/container/vector) or [Official Website of C++](https://cplusplus.com/).

---

<br>

## Copy Vector

To copy the contents of one vector to another in C++, you can use various methods. Here are a couple of common approaches:

### Method 1: Using Constructor or Assignment Operator

You can use the constructor or assignment operator to create a new vector and copy the elements from an existing vector.

```c++
#include<iostream>
#include<vector>
using namespace std;

int main() {
    // Original vector
    vector<int> originalVector = {1, 2, 3, 4, 5};

    // Copy using constructor
    vector<int> copiedVectorConstructor(originalVector);

    // Copy using assignment operator
    vector<int> copiedVectorAssignment = originalVector;


    // Display original and copied vectors
    cout << "Original Vector: ";
    for(int num : originalVector) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Copied Vector (Constructor): ";
    for(int num : copiedVectorConstructor) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Copied Vector (Assignment): ";
    for(int num : copiedVectorAssignment) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
```

### Method 2: Using assign Member Function

The assign member function can be used to copy the contents of one vector into another.

```c++
#include<iostream>
#include<vector>
using namespace std;

int main() {
    // Original vector
    vector<int> originalVector = {1, 2, 3, 4, 5};

    // Create a new vector
    vector<int> copiedVector;

    // Copy using assign
    copiedVector.assign(originalVector.begin(), originalVector.end());

    // Display original and copied vectors
    cout << "Original Vector: ";
    for(int num : originalVector) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Copied Vector: ";
    for(int num : copiedVector) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
```

---

<br>

## 2D Vector

A 2D vector in C++ refers to a vector of vectors, creating a two-dimensional structure. Each element in the outer vector is itself a vector, forming rows and columns similar to a matrix. Here's an example of how to work with a 2D vector:

```c++
#include<iostream>
#include<vector>
using namespace std;

int main() {
    // Declaration and initialization of a 2D vector
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Accessing elements in the 2D vector
    cout << "Element at row 1, column 2: " << matrix[1][2] << endl;

    // Modifying an element
    matrix[0][1] = 10;

    // Displaying the 2D vector
    cout << "Updated 2D vector:\n";
    for(const auto& row : matrix) {
        for(int value : row) {
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}
```

In this example:

-   The 2D vector `matrix` is declared and initialized with values.
-   Elements can be accessed using double square brackets (`matrix[row][column]`).
-   Modification of an element is done in a manner similar to a regular 2D array.
-   A nested range-based for loop is used to iterate over the rows and columns of the 2D vector for display.

<br>

```c++
vector< vector<int> > arr(5, vector<int>(10, 0));
```

In this example, the 2D vector `matrix` is declared and initialized with `5 rows` and `10 column` with initial value of every element is `0`.

### Jagged Array/Vector

A jagged array is an array of arrays where each element of the main array can be an array of different sizes or dimensions. Unlike a two-dimensional array, a jagged array allows for more flexibility in terms of the number of elements each sub-array can have.

```c++
#include<iostream>
#include<vector>
using namespace std;

int main() {
    // Declaration and initialization of a jagged array
    vector<vector<int>> jaggedArray = {
        {1, 2, 3},
        {4, 5},
        {6, 7, 8, 9}
    };

    // Accessing and displaying elements in the jagged array
    cout << "Jagged Array:\n";
    for(const auto& innerArray : jaggedArray) {
        for(int value : innerArray) {
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}
```

In this example:

-   The `jaggedArray` is a vector of vectors, where each inner vector represents a different-sized array.
    The inner vectors can have varying sizes, creating a jagged structure.

---
