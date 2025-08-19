# DSA Challenge: Day 62 Highlights

**Date:** April 6, 2024

---

## 🎯 Today's Focus: String Compression

Day 62 continued with string and array problems, focusing on the **String Compression** challenge. The goal was to compress a character array in-place by replacing consecutive repeating characters with the character followed by its count.

_(Great job maintaining your focus and consistency during Ramadan!)_

---

## ✅ Progress Summary

-   **Total Problems Solved:** 1
-   **Primary Language:** C++

---

## 🧠 Key Learnings & Approaches

Today's session focused on an efficient in-place modification of an array using a two-pointer approach.

1.  **String Compression:**
    -   **Approach:** The problem was solved using a **two-pointer (read and write) technique** to modify the array in-place.
        -   A "read" pointer (`i`) iterates through the array to find groups of consecutive identical characters. A second pointer (`j`) helps find the end of each group.
        -   A "write" pointer (`ansIndex`) keeps track of the position in the array where the compressed information should be written.
        -   For each group, the character is written at the `ansIndex` position. If the group's count is greater than 1, the count is converted to a string, and its digits are written to the array one by one.
    -   This method processes the array in a single pass (`O(N)`) and uses constant extra space, as the modification happens within the input array itself.

---

_Excellent work on a classic in-place array problem that's common in interviews!_
