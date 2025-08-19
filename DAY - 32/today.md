# DSA Challenge: Day 32 Highlights

**Date:** March 7, 2024

---

## 🎯 Today's Focus: Selection Sort

Day 32 continued the exploration of fundamental sorting algorithms with **Selection Sort**. The session focused on understanding its in-place sorting mechanism, which involves repeatedly finding the minimum element from the unsorted portion and placing it at the beginning.

---

## ✅ Progress Summary

-   **Total Problems Solved:** 1
-   **Primary Language:** C++

---

## 🧠 Key Learnings & Approaches

Today's session was about understanding a different strategy for comparison-based sorting.

1.  **Selection Sort:**
    -   **Approach:** The **Selection Sort** algorithm was implemented using a **nested loop**.
        -   The outer loop iterates from the first element to the second-to-last element, defining the boundary between the sorted and unsorted parts of the array.
        -   The inner loop scans the entire unsorted portion (from the current position of the outer loop to the end) to find the index of the absolute minimum element.
        -   After the inner loop completes, the minimum element found is swapped with the element at the current position of the outer loop.
    -   This process systematically "selects" the smallest remaining element and places it in its correct sorted position, growing the sorted portion of the array from left to right. The algorithm has a time complexity of `O(N^2)`.

---

_Another foundational sorting algorithm covered. Good progress!_
