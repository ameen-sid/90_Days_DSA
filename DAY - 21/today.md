# DSA Challenge: Day 21 Highlights

**Date:** February 25, 2024

---

## 🎯 Today's Focus: Binary Search in Complex Scenarios

Day 21 was about applying the **Binary Search** algorithm to more complex data structures and situations. The session focused on how to adapt the core logic to search efficiently in a sorted 2D matrix and a rotated sorted array, building upon the concepts from previous days.

---

## ✅ Progress Summary

-   **Total Problems Solved:** 2
-   **Primary Language:** C++

---

## 🧠 Key Learnings & Approaches

Today's session demonstrated the versatility of binary search by adapting it for non-linear data structures and partially sorted arrays.

1.  **Search In a 2D Matrix:**

    -   **Approach:** This problem was solved by treating the `M x N` 2D matrix as a **flattened, virtual 1D array** of size `M * N`. A standard binary search was performed on the index range from `0` to `(M * N) - 1`. For any `mid` index in this virtual array, the corresponding `[row][col]` coordinates in the actual matrix were calculated using division (`rowIndex = mid / colCount`) and modulus (`colIndex = mid % colCount`). This allowed for an efficient `O(log(M*N))` search without physically altering the matrix.

2.  **Search In a Sorted Rotated Array:**
    -   **Approach:** This was solved using a **two-step binary search process**.
        1.  **Find Pivot:** First, a modified binary search (from Day 18/19) was used to find the pivot element, which is the smallest element and the start of the second sorted portion of the array.
        2.  **Search in Subarray:** Once the pivot was found, the algorithm determined which of the two sorted subarrays the `target` could potentially be in. A standard binary search was then performed only on that specific subarray, maintaining the `O(log N)` time complexity.

---

_A great day of combining previous learnings to solve more complex and practical search problems._
