# DSA Challenge: Day 13 Highlights

**Date:** February 17, 2024

---

## 🎯 Today's Focus: Hashing, In-place Manipulations, and Multi-Array Pointers

Day 13 continued the exploration of array problems with a focus on more advanced techniques. The session covered using hash maps for efficient lookups, clever in-place array modifications to save space, and extending the two-pointer technique to work with three arrays simultaneously.

---

## ✅ Progress Summary

-   **Total Problems Solved:** 5
-   **Primary Language:** C++

---

## 🧠 Key Learnings & Approaches

Today's session introduced powerful new patterns for solving common array problems. Here are the approaches used:

1.  **Common Elements in 3 Sorted Arrays:**

    -   **Approach:** An efficient **three-pointer technique** was used. Pointers `i`, `j`, and `k` start at the beginning of each of the three sorted arrays. The pointers are advanced based on which one points to the smallest element. When all three pointers point to the same value, that element is an intersection. A `std::set` was used to store the results to automatically handle any duplicate common elements.

2.  **Find First Repeating Element:**

    -   **Brute-Force Approach:** A nested loop (`O(N^2)`) compares every element with every subsequent element to find the first pair that matches.
    -   **Optimized Hashing Approach:** A more efficient `O(N)` solution using a hash map. The first pass iterates through the array to count the frequency of each element and stores it in a hash map (`std::unordered_map` or a simple array acting as a hash). The second pass iterates through the array again, and the first element with a frequency greater than 1 in the hash map is the answer.

3.  **Find Missing Element From an Array With Duplicates:**

    -   **Visited Approach (In-place Marking):** This clever `O(N)` approach uses the array itself to store information. It iterates through the array, and for each element `x`, it marks the element at index `abs(x) - 1` as negative. A second pass then finds the indices whose values are still positive; these correspond to the missing numbers.
    -   **Sorting + Swapping Approach (Cyclic Sort):** This in-place `O(N)` method iterates through the array. For each element at index `i`, it swaps it with the element at its correct sorted position (`nums[i] - 1`) until the element is in the right place. After sorting, a final pass identifies the missing numbers by finding indices where `nums[i] != i + 1`.

4.  **Move All Negatives to the Left Side of an Array:**

    -   **Sorting Approach:** A simple `O(N log N)` solution where the array is sorted using a standard library function. This naturally places all negative numbers before the positive ones.
    -   **Optimized Two-Pointer Approach:** A more efficient `O(N)` in-place solution. A `low` pointer starts from the left and a `high` pointer from the right. The pointers move inward, swapping elements only when a positive number is on the left and a negative number is on the right.

5.  **Remove Duplicates From Sorted Array:**
    -   **Approach:** An efficient **Two-Pointer (fast and slow pointer)** method was used. A slow pointer `j` tracks the position of the last unique element. A fast pointer `i` iterates through the array. If `arr[i]` is different from `arr[j]`, it means a new unique element has been found, so `j` is incremented and the value of `arr[i]` is placed at `arr[j]`.

---

_A great day of learning how to use space-efficient in-place algorithms and hashing to optimize solutions!_
