# DSA Challenge: Day 12 Highlights

**Date:** February 16, 2024

---

## 🎯 Today's Focus: Advanced Array & Matrix Algorithms

Day 12 was a deep dive into more complex algorithms for both 1D and 2D arrays. The session focused on advanced traversal patterns for matrices and classic array manipulation problems, often comparing brute-force, intermediate, and highly optimized solutions.

---

## ✅ Progress Summary

-   **Total Problems Solved:** 9
-   **Primary Language:** C++

---

## 🧠 Key Learnings & Approaches

Today's session covered a wide range of important algorithms. Here are the approaches used for each problem:

### 2D Array Problems

1.  **Rotate Image (90 degrees clockwise):**

    -   **Approach:** A two-step, in-place algorithm was used. First, the matrix is **transposed**, which swaps elements across the main diagonal (`matrix[i][j]` becomes `matrix[j][i]`). Second, each row of the transposed matrix is **reversed**. This combination efficiently achieves a 90-degree clockwise rotation.

2.  **Row With Maximum Ones:**

    -   **Approach:** A straightforward **brute-force** method was implemented. The code iterates through each row of the matrix, and for each row, it iterates through all its columns to count the number of `1`s. It maintains a variable to track the maximum count found so far and the index of that row.

3.  **Spiral Print a Matrix:**

    -   **Approach:** This was solved using a **four-pointer boundary traversal**. Pointers for `startingRow`, `endingRow`, `startingCol`, and `endingCol` define the current layer of the matrix. The algorithm prints the top row, then the rightmost column, then the bottom row, and finally the leftmost column, shrinking the boundaries inward after each step until all elements have been visited.

4.  **Wave Print a Matrix:**
    -   **Approach:** This traversal iterates **column by column**. It checks if the current column index is even or odd. For even columns, it prints the elements from top to bottom. For odd columns, it prints from bottom to top, creating the desired wave pattern.

### Array Problems

5.  **Maximum Subarray Sum:**

    -   **Brute-Force Approach:** An `O(N^3)` solution that uses three nested loops to identify every possible subarray, calculate its sum, and find the maximum among them.
    -   **Prefix Sum Approach:** An `O(N^2)` optimization. A prefix sum array is created first. Then, using two nested loops, the sum of any subarray `[i...j]` can be calculated in `O(1)` time as `prefix[j] - prefix[i-1]`.
    -   **Optimized Approach (Kadane's Algorithm):** A highly efficient `O(N)` single-pass algorithm. It maintains a `currentSum` and a `maxSum`. It iterates through the array, adding to `currentSum`. If `currentSum` ever becomes negative, it is reset to 0. `maxSum` is updated whenever `currentSum` exceeds it.

6.  **Missing Number:**

    -   **Approach:** A **mathematical summation** method was used. The expected sum of a sequence of numbers from 0 to `n` is calculated using the formula `n * (n + 1) / 2`. The actual sum of the elements in the given array is then subtracted from this expected sum to find the single missing number.

7.  **Rotate Array:**

    -   **Modulus Approach:** This method uses an auxiliary array (`O(N)` space). It calculates the new, rotated index for each element using the formula `newIndex = (currentIndex + k) % arraySize` and places the element in the new array at that position.
    -   **Optimized Approach (Reversal Algorithm):** A clever in-place (`O(1)` space) solution. It involves three steps: 1) Reverse the entire array. 2) Reverse the first `k` elements. 3) Reverse the remaining `n-k` elements. This sequence of reversals correctly rotates the array.

8.  **Shift Negatives One Side:**

    -   **Approach:** The **Two-Pointer method** was used to partition the array. A `start` pointer moves from the left and an `end` pointer moves from the right. The logic handles various cases to efficiently swap positive elements on the left with negative elements on the right until the pointers cross.

9.  **Sort Colors (0s, 1s, and 2s):**
    -   **Approach:** This problem was solved using the **Dutch National Flag algorithm**. It uses three pointers (`low`, `mid`, `high`) to partition the array into three sections (0s, 1s, and 2s) in a single, efficient pass, making it the optimal solution.

---

_A very productive day covering essential array and matrix algorithms and their optimizations!_
