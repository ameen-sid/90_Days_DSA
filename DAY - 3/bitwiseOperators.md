# <center>Bitwise Operator</center>

Bitwise operators are used in programming to perform operations at the bit level. These operators manipulate individual bits in binary representations of numbers.

---

### 1. AND Operator ( & ):

Performs a bitwise AND operation on each pair of corresponding bits.
If both bits are 1, the result is 1; otherwise, it's 0.

|  A  |  B  | A AND B |
| :-: | :-: | :-----: |
|  0  |  0  |    0    |
|  0  |  1  |    0    |
|  1  |  0  |    0    |
|  1  |  1  |    1    |

---

### 2. OR Operator ( | ):

Performs a bitwise OR operation on each pair of corresponding bits.
If at least one bit is 1, the result is 1; otherwise, it's 0.

|  A  |  B  | A OR B |
| :-: | :-: | :----: |
|  0  |  0  |   0    |
|  0  |  1  |   0    |
|  1  |  0  |   0    |
|  1  |  1  |   1    |

---

### 3. NOT Operator ( ~ ):

Performs a bitwise NOT operation, inverting each bit (changing 1s to 0s and vice versa).

|  A  | A NOT |
| :-: | :---: |
|  0  |   1   |
|  1  |   0   |

---

### 4. XOR Operator ( ^ ):

Performs a bitwise exclusive OR operation on each pair of corresponding bits.
If the bits are different, the result is 1; if they are the same, the result is 0.

|  A  |  B  | A XOR B |
| :-: | :-: | :-----: |
|  0  |  0  |    0    |
|  0  |  1  |    1    |
|  1  |  0  |    1    |
|  1  |  1  |    0    |

---

### 5. Left Shift ( << ):

Shifts the bits of a number to the left by a specified number of positions, adding zeros on the right.

<pre>
0011 (decimal 3) << 2
----------------------
1100 (decimal 12)
</pre>

> Note:

-   a left shift n is equal to a multiply 2 raise to the power of n.
-   (a << n) == (a \* pow(2, n))

---

### 6. Right Shift ( >> ):

Shifts the bits of a number to the right by a specified number of positions, filling in with zeros on the left.

<pre>
1100 (decimal 12) >> 2
-----------------------
0011 (decimal 3)
</pre>

> Note:

-   a right shift n is equal to a divide 2 raise to the power of n. and it is Compiler Dependent.
-   (a >> n) == (a / pow(2, n))

> Important Cases:

-   If signed integer (-ve >> 1), then compiler handle by itself.
-   In case of unsigned integer it gives positive large value.
-   If shift in any direction with -ve times (a >> -n), then it will print garbage value.
