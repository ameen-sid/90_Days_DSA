# DSA Challenge: Day 35 Highlights

**Date:** March 10, 2024

---

## 🎯 Today's Focus: Exponential Search

Day 35 introduced a new search algorithm, **Exponential Search**, which is particularly effective for searching in unbounded or infinite-sized sorted arrays. The session focused on understanding how it combines a range-finding step with binary search to achieve high efficiency.

---

## ✅ Progress Summary

-   **Total Problems Solved:** 1
-   **Primary Language:** C++

---

## 🧠 Key Learnings & Approaches

Today's session was about understanding a two-phase search algorithm designed for very large datasets.

1.  **Exponential Search:**
    -   **Approach:** The algorithm works in two main stages to find a target in a sorted array.
        1.  **Find the Range:** It first finds a range where the target element is likely to be present. It starts with a subarray of size 1 and repeatedly doubles the size (`i = i * 2`) until the last element of the subarray is greater than the target. This quickly identifies an upper bound for the search.
        2.  **Perform Binary Search:** Once this smaller range is identified (from `i/2` to `i`), a standard **Binary Search** is performed on it to find the exact index of the target element.
    -   This approach is highly efficient because it narrows down a potentially infinite search space to a manageable block, on which the `O(log N)` binary search can be performed.

---

_A great session on an optimized search technique for handling massive or unbounded arrays!_
