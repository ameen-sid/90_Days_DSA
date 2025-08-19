# DSA Challenge: Day 20 Highlights

**Date:** February 24, 2024

---

## 🎯 Today's Focus: Binary Search on the Search Space

Day 20 explored a powerful application of **Binary Search**: finding the square root of a number. This problem demonstrates how binary search can be applied to a continuous range of numbers (the search space) to find an answer, rather than just searching within a discrete array.

---

## ✅ Progress Summary

-   **Total Problems Solved:** 2 (Integer and high-precision square root)
-   **Primary Language:** C++

---

## 🧠 Key Learnings & Approaches

Today's session was about using binary search to find a value that satisfies a mathematical condition.

1.  **Find Square Root of N (Integer Part):**

    -   **Approach:** This was solved using **Binary Search on the Answer**. The search space for the square root of `n` is the range of integers from `0` to `n`. The algorithm repeatedly checks the middle value (`mid`) of this range.
        -   If `mid * mid == n`, `mid` is the perfect square root.
        -   If `mid * mid < n`, `mid` is a potential answer, but a larger root might exist, so the search continues in the right half (`start = mid + 1`).
        -   If `mid * mid > n`, `mid` is too large, so the search continues in the left half (`end = mid - 1`).
    -   This efficiently finds the integer part of the square root in `O(log N)` time.

2.  **Find Square Root of N with More Precision:**
    -   **Approach:** This problem was solved using an **iterative refinement** method that builds upon the integer solution from the first problem.
    -   After finding the integer part of the root, the algorithm iterates for a specified number of precision levels (e.g., tenths, hundredths, thousandths). In each iteration, it incrementally adds a small `factor` (0.1, 0.01, 0.001, etc.) to the answer until the square of the new number exceeds `n`. This provides a highly accurate decimal approximation of the square root.

---

_A great session on applying binary search to mathematical problems and search spaces beyond simple arrays._
