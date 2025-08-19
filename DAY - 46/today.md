# DSA Challenge: Day 46 Highlights

**Date:** March 21, 2024

---

## 🎯 Today's Focus: Move Zeros

Day 46 was dedicated to solving the classic array manipulation problem, **Move Zeros**. The goal is to move all the zero elements to the end of the array while maintaining the relative order of the non-zero elements.

---

## ✅ Progress Summary

-   **Total Problems Solved:** 1
-   **Primary Language:** C++

---

## 🧠 Key Learnings & Approaches

Today's session focused on an efficient, in-place solution to partition an array.

1.  **Move Zeros:**
    -   **Approach:** The problem was solved using an efficient **two-pointer (or slow/fast pointer) technique** in a single pass.
        -   A slow pointer (`nonZero`) keeps track of the position where the next non-zero element should be placed.
        -   A fast pointer (`i`) iterates through the entire array.
        -   Whenever the fast pointer encounters a non-zero element, it is swapped with the element at the slow pointer's position, and the slow pointer is then incremented.
    -   This method effectively partitions the array into non-zero and zero elements in `O(N)` time and `O(1)` space, while preserving the relative order of the non-zero elements.

---

_A great session on an important in-place array manipulation technique!_
