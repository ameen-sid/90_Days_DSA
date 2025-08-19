# DSA Challenge: Day 61 Highlights

**Date:** April 5, 2024

---

## 🎯 Today's Focus: Remove All Adjacent Duplicates in String

Day 61 continued with string manipulation, focusing on the problem of removing all adjacent duplicate characters from a string until no such duplicates exist.

_(Great job staying consistent with the challenge during Ramadan!)_

---

## ✅ Progress Summary

-   **Total Problems Solved:** 1
-   **Primary Language:** C++

---

## 🧠 Key Learnings & Approaches

Today's session focused on using a stack-like approach to efficiently process the string and remove duplicates.

1.  **Remove Adjacent Duplicates in String:**
    -   **Approach:** The problem was solved using a **string as a stack**. The algorithm iterates through the input string `s` one character at a time.
        -   If the result string (`ans`) is empty or if its last character is different from the current character, the current character is pushed onto the `ans` string.
        -   If the last character of `ans` is the same as the current character, it means an adjacent duplicate pair is formed, so the last character is popped from the `ans` string.
    -   This method efficiently processes the string in a single pass (`O(N)`), correctly handling chains of duplicates.

---

_Excellent use of a string to simulate stack behavior for a clean and efficient solution!_
