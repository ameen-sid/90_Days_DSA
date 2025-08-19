# DSA Challenge: Day 29 Highlights

**Date:** March 4, 2024

---

## 🎯 Today's Focus: K-Difference Pairs in an Array

Day 29 was dedicated to solving the **K-Diff Pairs** problem, which involves finding the number of unique pairs in an array that have a specific difference `k`. The session focused on comparing two different `O(N log N)` approaches that both leverage sorting as a preliminary step.

---

## ✅ Progress Summary

-   **Total Problems Solved:** 1
-   **Primary Language:** C++

---

## 🧠 Key Learnings & Approaches

Today's session explored two effective methods for solving the K-Diff Pairs problem, both of which rely on an initial sort.

1.  **K-Diff Pairs In an Array:**
    -   **Two-Pointer Approach:** This is a highly efficient method after an initial sort (`O(N log N)`). Two pointers, `i` and `j`, are used to traverse the array. The difference between `nums[j]` and `nums[i]` is calculated.
        -   If the difference is equal to `k`, a valid pair is found, and both pointers are advanced.
        -   If the difference is greater than `k`, `i` is advanced to make the difference smaller.
        -   If the difference is less than `k`, `j` is advanced to make the difference larger.
    -   **Binary Search Approach:** This approach also starts by sorting the array (`O(N log N)`). It then iterates through each element `nums[i]` and performs a binary search for the target element `nums[i] + k` in the rest of the array.
    -   **Note:** A `std::set` was used in both solutions to automatically handle the storage of unique pairs, preventing duplicates from being counted.

---

_A great session comparing two different algorithmic approaches to solve the same problem efficiently._
