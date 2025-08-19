# DSA Challenge: Day 33 Highlights

**Date:** March 8, 2024

---

## 🎯 Today's Focus: Insertion Sort

Day 33 continued the series on fundamental sorting algorithms with **Insertion Sort**. This session focused on understanding its adaptive nature and how it builds a sorted array one element at a time, which is analogous to how many people sort a hand of playing cards.

---

## ✅ Progress Summary

-   **Total Problems Solved:** 1
-   **Primary Language:** C++

---

## 🧠 Key Learnings & Approaches

Today's session was about understanding an intuitive, in-place sorting algorithm that is efficient for small or nearly sorted datasets.

1.  **Insertion Sort:**
    -   **Approach:** The **Insertion Sort** algorithm was implemented using a **nested loop structure**.
        -   The outer loop iterates from the second element of the array (`i = 1`) to the end.
        -   For each iteration, the current element (`key`) is considered the next item to be "inserted" into the sorted portion of the array (which is everything to its left).
        -   An inner `while` loop shifts all elements in the sorted portion that are greater than the `key` one position to the right. This process continues until the correct position for the `key` is found.
        -   The `key` is then placed into the newly created empty slot.
    -   This method builds the final sorted array one item at a time, and while it has a worst-case time complexity of `O(N^2)`, it can be very efficient for data that is already substantially sorted.

---

_Good progress on the fundamental sorting algorithms!_
