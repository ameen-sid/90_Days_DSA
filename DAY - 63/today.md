# DSA Challenge: Day 63 Highlights

**Date:** April 7, 2024

---

## 🎯 Today's Focus: Search a 2D Matrix - II

Day 63 was dedicated to solving a more advanced 2D array search problem: **Search a 2D Matrix - II**. This problem involves searching for a target in a matrix where both rows and columns are sorted independently.

_(Great job maintaining your consistency during Ramadan!)_

---

## ✅ Progress Summary

-   **Total Problems Solved:** 1
-   **Primary Language:** C++

---

## 🧠 Key Learnings & Approaches

Today's session focused on a highly efficient search strategy that leverages the sorted nature of both rows and columns.

1.  **Search a 2D Matrix - II:**
    -   **Approach:** The problem was solved using an optimized search pattern often called **"Staircase Search"** or **"Saddleback Search"**.
        -   The algorithm starts the search from the **top-right corner** of the matrix.
        -   In each step, it compares the current element with the `target`:
            -   If the element is equal to the `target`, the search is successful.
            -   If the element is less than the `target`, it means the `target` cannot be in the current row (since all elements to the left are smaller), so we move down to the next row (`rowIndex++`).
            -   If the element is greater than the `target`, it means the `target` cannot be in the current column (since all elements below are larger), so we move left to the previous column (`colIndex--`).
    -   This method efficiently eliminates one row or one column in each step, resulting in a time complexity of `O(rows + cols)`.

---

_Excellent work on a classic matrix search problem that requires a non-obvious but highly efficient approach!_
