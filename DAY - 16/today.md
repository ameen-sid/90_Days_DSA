# DSA Challenge: Day 16 Highlights

**Date:** February 20, 2024

---

## 🎯 Today's Focus: Advanced Applications of Binary Search

Day 16 was dedicated to exploring more advanced use cases for **Binary Search**. The session moved beyond simply finding an element to locating its specific occurrences within a sorted array that contains duplicates.

---

## ✅ Progress Summary

-   **Total Problems Solved:** 3
-   **Primary Language:** C++

---

## 🧠 Key Learnings & Approaches

Today's session focused on modifying the standard binary search algorithm to solve more specific problems. The core idea is to not stop when the target is found, but to continue searching in a specific direction.

1.  **Find First Occurence:**

    -   **Approach:** A **modified Binary Search** was implemented. When an instance of the `target` is found at `mid`, the index is stored as a potential answer. However, instead of stopping, the search continues by moving the `end` pointer to `mid - 1`. This narrows the search space to the left half, ensuring that the algorithm ultimately finds the leftmost (first) occurrence.

2.  **Find Last Occurence:**

    -   **Approach:** This also uses a **modified Binary Search**. When the `target` is found at `mid`, the index is stored. To find the last occurrence, the search continues by moving the `start` pointer to `mid + 1`. This forces the algorithm to explore the right half of the remaining search space to find the rightmost instance.

3.  **Find Total No of Occurrences:**
    -   **Approach:** This problem was solved by **combining the two previous functions**. The algorithm first calls `findFirstOccurence` and then `findLastOccurence`. The total number of occurrences is then calculated using the formula: `(lastOccurence - firstOccurence) + 1`. This demonstrates efficient code reuse and problem decomposition.

---

_A great day of learning how to adapt a core algorithm to solve more complex and specific search problems!_
