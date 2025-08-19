# DSA Challenge: Day 10 Highlights

**Date:** February 14, 2024

---
## 🎯 Today's Focus: Intermediate Array Problems & Optimization

Day 10 continued the deep dive into arrays by tackling a set of more complex problems. The focus was on identifying brute-force solutions and then implementing more efficient, optimized approaches using techniques like the Two-Pointer method and the Dutch National Flag algorithm.

---
## ✅ Progress Summary

* **Total Problems Solved:** 9
* **Primary Language:** C++

---
## 🧠 Key Learnings & Approaches

Today's session was centered on moving beyond simple traversal and applying more advanced algorithms to array-based problems.

1.  **Array Intersection:**
    * **Brute-Force Approach:** Used a nested loop (`O(N^2)`) to compare every element of the first array with every element of the second. To handle duplicates, found elements in the second array were marked to avoid reuse.
    * **Optimized Approach:** Implemented the **Two-Pointer technique** on sorted arrays. By advancing pointers based on which element is smaller, the intersection can be found in a single pass (`O(N)`).

2.  **Extreme Print in an Array:**
    * **Approach:** Employed the **Two-Pointer method** with `start` and `end` pointers. In each step of the loop, the element at `start` and the element at `end` are printed, and the pointers are moved closer to the center.

3.  **Find Duplicates in an Array:**
    * **Approach:** A clever solution using the **XOR bitwise operator**. First, XOR all elements of the array together. Then, XOR the result with all numbers from 1 to N-1. The duplicate pairs and the number series cancel each other out, leaving only the duplicate number.

4.  **Find Triplet With Given Sum:**
    * **Approach:** A **brute-force** solution using three nested loops (`O(N^3)`) to check every possible combination of three elements to see if they sum up to the target value.

5.  **Pair Sum:**
    * **Approach:** A **brute-force** solution using two nested loops (`O(N^2)`) to check every unique pair of elements to see if they sum up to the target.

6.  **Shift Element By 1:**
    * **Approach:** A simple linear scan (`O(N)`) where elements are shifted one position at a time. The first (for left shift) or last (for right shift) element is stored in a temporary variable and placed at the end/start after the shift.

7.  **Shift Element By N:**
    * **Approach:** Used a temporary array of size `N` to store the `N` elements that would be rotated off the end. The remaining elements are shifted, and then the elements from the temporary array are copied back into the vacant spots.

8.  **Sort 0s, 1s, and 2s:**
    * **Brute-Force Approach:** A two-pass counting method. The first pass counts the occurrences of 0s, 1s, and 2s. The second pass overwrites the original array with the counted number of 0s, then 1s, then 2s.
    * **Optimized Approach:** Implemented the **Dutch National Flag algorithm**. Using `low`, `mid`, and `high` pointers, the array is partitioned into three sections (0s, 1s, and 2s) in a single pass (`O(N)`).

9.  **Sort 0s And 1s:**
    * **Brute-Force Approach:** A counting method similar to the one above, where the number of 0s is counted, and then the array is refilled accordingly.
    * **Optimized Approach:** Used the **Two-Pointer method**. A `start` pointer moves forward from the beginning, and an `end` pointer moves backward from the end, swapping elements when a 1 is found at the start and a 0 is found at the end.

---
*A fantastic day of learning how to identify and implement optimized solutions for common array problems!*