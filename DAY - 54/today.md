# DSA Challenge: Day 54 Highlights

**Date:** March 29, 2024

---

## 🎯 Today's Focus: Maximum Occurring Character

Day 54 continued with string problems, focusing on finding the character that appears most frequently in a given string.

_(Keeping up the great work during Ramadan!)_

---

## ✅ Progress Summary

-   **Total Problems Solved:** 1
-   **Primary Language:** C++

---

## 🧠 Key Learnings & Approaches

Today's session focused on using a hashing technique for efficient character counting.

1.  **Maximum Occurring Character:**
    -   **Approach:** A **frequency counting** (or hashing) method was used with an array of size 26 to store the counts of each letter of the alphabet.
        1.  The first loop iterates through the input string. For each character, it calculates a corresponding index (0-25) by subtracting the ASCII value of 'a' (handling both upper and lower case). The count at that index in the frequency array is then incremented.
        2.  A second loop iterates through the frequency array to find the index with the highest count.
        3.  Finally, this index is converted back to a character to get the result. This approach is highly efficient, with a time complexity of `O(N)` and constant space `O(1)`.

---

_Excellent job using a space-efficient hashing technique to solve this problem!_
