# Time & Space Complexity

### Time Complexity

Amount of time taken by an algorithm to run as a function of length of input.

---

### Space Complexity

Amount of space taken by an algorithm to run as a function of length of input.

---

### Why to study T&S Complexity?

-   Good computer engineer always thinks about the complexity of the code written by him.

-   Resources are limited.

-   Measure algorithm to make efficient programs.

-   Asked by interviewer after every solution you give.

---

### Unit to Representation Complexity

-   Big 0: Upper Bond

-   Theta : Average Case

-   Omega : Lower Bond

---

### Big O Complexities

1. Constant time: 0(1)

2. Linear time: 0(n)

3. Logarithmic time: 0(log n)

4. Quadratic time: 0(n^2)

5. Cubic time: 0(n^3)

---

### Complexities by Efficiency

-   O(1)

-   O(log n)

-   O(sqrt(n))

-   O(n)

-   O(n logn)

-   O(n<sup>2</sup>)

-   O(n<sup>3</sup>)

-   O(2<sup>n</sup>)

-   O(n!)

-   O(n<sup>n</sup>)

---

### Find Complexity of Recursive Algorithm

-   Total work done = (no of calls \* work in each call)

-   Recurrence Equation

-   Space Complexity = (max depth \* memory in each call)

<br>

> Note:

-   Fibonacci => The Master's Theorem

-   Golden Ratio in fibonacci

---

### Time Complexity Chart With Constrains

|  No of Inputs  |       Time Should Be Taken        |
| :------------: | :-------------------------------: |
|  <= [10...11]  |      O(n!), O(n<sup>6</sup>)      |
|  < [15...18]   | O(2<sup>n</sup> \* n<sup>2</sup>) |
|     < 100      |         O(n<sup>4</sup>)          |
|     < 400      |         O(n<sup>3</sup>)          |
|     < 2000     |     O(n<sup>2</sup> \* logn)      |
| 10<sup>4</sup> |         O(n<sup>2</sup>)          |
| 10<sup>6</sup> |             O(n logn)             |
| 10<sup>8</sup> |           O(n), O(logn)           |

<br>
1s ==> 10^8 operations ==> TLE
