# DSA Challenge: Day 18 Highlights

**Date:** February 22, 2024

---

## 🎯 Today's Focus: Binary Search on a Rotated Sorted Array

Day 18 continued the theme of applying **Binary Search** to non-traditional problems. The focus was on a classic interview question: finding the pivot element (the minimum element) in a sorted array that has been rotated.

---

## ✅ Progress Summary

-   **Total Problems Solved:** 1
-   **Primary Language:** C++

---

## 🧠 Key Learnings & Approaches

Today's session was about adapting binary search to work on a data structure that is only partially sorted.

1.  **Find Pivot Element In a Sorted Rotated Array:**
    -   **Approach:** This problem was solved using a **modified Binary Search**. The key was to determine if the `mid` element was part of the larger, first sorted portion or the smaller, second sorted portion. This was achieved by comparing `arr[mid]` with the first element of the array, `arr[0]`.
        -   If `arr[mid] >= arr[0]`, it means `mid` is in the first, larger line, so the pivot must be to its right. We then safely move `start = mid + 1`.
        -   If `arr[mid] < arr[0]`, it means `mid` is in the second, smaller line (or it _is_ the pivot), so the pivot must be at `mid` or to its left. We then narrow the search by moving `end = mid`.
    -   This logic efficiently halves the search space in each step, finding the pivot in `O(log N)` time.

---

_A great session on applying binary search to rotated arrays, a very common and important pattern._
