# DSA Challenge: Day 30 Highlights

**Date:** March 5, 2024

---

## 🎯 Today's Focus: Finding K Closest Elements

Day 30 was dedicated to solving the **Find K Closest Elements** problem. This challenge involves finding a contiguous subarray of size `K` from a sorted array whose elements are closest to a given value `X`. The session focused on comparing multiple efficient approaches to solve this problem.

---

## ✅ Progress Summary

-   **Total Problems Solved:** 1
-   **Primary Language:** C++

---

## 🧠 Key Learnings & Approaches

Today's session explored and compared two primary methods for finding the K closest elements, both of which are highly efficient.

1.  **Find K Closest Elements:**
    -   **Two-Pointer Approach:** This is an elegant and efficient `O(N)` solution. It initializes two pointers, `low` at the start of the array and `high` at the end. The algorithm maintains a window between these pointers and shrinks it by one element at a time until the window size is exactly `K`. In each step, it compares the difference between `X` and the elements at the `low` and `high` pointers, discarding the element that is farther away from `X`.
    -   **Binary Search Approach:** This `O(log N + K)` approach first uses a modified binary search (`lower_bound`) to find the element in the array that is closest to `X` (or where `X` would be inserted). This serves as an optimal starting point. From this central point, two pointers (`low` and `high`) are expanded outwards, one to the left and one to the right. In each of the `K` steps, the algorithm compares the elements at the `low` and `high` pointers and includes the one that is closer to `X` in the final window.

---

_A fantastic session comparing different advanced techniques to solve a single problem efficiently!_
