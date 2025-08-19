# DSA Challenge: Day 36 Highlights

**Date:** March 11, 2024

---

## 🎯 Today's Focus: Searching in Unbounded Arrays

Day 36 was dedicated to the specific challenge of searching for an element in a sorted array that is considered "unbounded" or infinite in size. The session focused on implementing and contrasting two approaches: a simple linear scan and the more efficient exponential search.

---

## ✅ Progress Summary

-   **Total Problems Solved:** 2
-   **Primary Language:** C++

---

## 🧠 Key Learnings & Approaches

Today's session was about adapting search algorithms for arrays where the size is unknown or too large to define a traditional boundary.

1.  **Unbounded Linear Search:**

    -   **Approach:** This is the most straightforward method. It uses a `while` loop to iterate through the array, starting from the first element. In each step, it checks if the current element is the target or if it has surpassed the target. If the current element is greater than the target, the search stops, as the target cannot exist further in the sorted array.

2.  **Unbounded Binary Search (Exponential Search):**
    -   **Approach:** This is a highly efficient, two-phase algorithm.
        1.  **Find the Range:** It first finds an appropriate range for the search by repeatedly doubling an index `i` until `nums[i]` is greater than the target. This quickly establishes an upper bound.
        2.  **Perform Binary Search:** Once the range is found (from `i/2` to `i`), a standard binary search is performed within this smaller, well-defined block to locate the target element. This combines the speed of exponential growth with the efficiency of binary search.

---

_A great session on handling a unique and important edge case for search algorithms!_
