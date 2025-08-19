# DSA Challenge: Day 19 Highlights

**Date:** February 23, 2024

---

## 🎯 Today's Focus: A Different Approach to Finding the Pivot

Day 19 continued the practice of **Binary Search on Rotated Sorted Arrays**, exploring an alternative implementation for finding the pivot element. This approach focuses on comparing the middle element with its immediate neighbors to identify the peak.

---

## ✅ Progress Summary

-   **Total Problems Solved:** 1
-   **Primary Language:** C++

---

## 🧠 Key Learnings & Approaches

Today's session provided a different perspective on solving the same problem from Day 18.

1.  **Find Pivot Element In a Sorted Array:**
    -   **Approach:** This solution uses a **modified Binary Search** that directly checks if the `mid` element is the pivot. The pivot is the largest element, so it will always be greater than its right neighbor.
        -   The core logic checks two conditions: `arr[mid] > arr[mid + 1]` (making `mid` the pivot) or `arr[mid] < arr[mid - 1]` (making `mid - 1` the pivot).
        -   If `mid` is not the pivot, the algorithm determines which part of the array is sorted by comparing `arr[start]` with `arr[mid]`. If the left part is sorted (`arr[start] < arr[mid]`), the pivot must be in the right half, so we search there. Otherwise, the pivot is in the left half.
    -   This method efficiently narrows down the search space to find the pivot in `O(log N)` time.

---

_Reinforcing the concept of binary search on rotated arrays with a new implementation strategy._
