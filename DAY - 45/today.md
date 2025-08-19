# DSA Challenge: Day 45 Highlights

**Date:** March 20, 2024

---

## 🎯 Today's Focus: Merging Two Sorted Arrays

Day 45 was dedicated to solving a classic and fundamental array problem: **Merging Two Sorted Arrays**. This is a core subroutine for more advanced algorithms like Merge Sort and is a very common interview question.

---

## ✅ Progress Summary

-   **Total Problems Solved:** 1
-   **Primary Language:** C++

---

## 🧠 Key Learnings & Approaches

Today's session focused on implementing the standard, efficient algorithm for merging.

1.  **Merge Two Sorted Arrays:**
    -   **Approach:** The problem was solved using the classic **Two-Pointer technique**.
        -   Three pointers (`i`, `j`, and `k`) were used. `i` tracks the current element in the first array, `j` tracks the current element in the second array, and `k` tracks the current position in the new merged array.
        -   The algorithm compares the elements at `arr1[i]` and `arr2[j]` and places the smaller of the two into `arr3[k]`, advancing the corresponding pointers.
        -   This continues until one of the arrays is exhausted. Finally, a separate loop copies any remaining elements from the non-exhausted array into the result.
    -   This approach is highly efficient, with a time complexity of `O(N + M)`, where N and M are the sizes of the two arrays.

---

_A great session on a foundational algorithm that is a building block for many other sorting and merging tasks._
