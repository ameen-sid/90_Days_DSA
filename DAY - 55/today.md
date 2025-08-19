# DSA Challenge: Day 55 Highlights

**Date:** March 30, 2024

---
## 🎯 Today's Focus: Replacing Spaces & Handling Line Input

Day 55 continued with string manipulation, focusing on the problem of replacing all spaces in a string with a specific character sequence (`@40`). The session also included learning how to correctly read an entire line of input, including spaces, using the `getline()` function.

*(Keeping up the consistency during Ramadan is commendable!)*

---
## ✅ Progress Summary

* **Total Problems Solved:** 1
* **Primary Language:** C++

---
## 🧠 Key Learnings & Approaches

Today's session focused on string traversal and building a new string based on specific conditions.

1.  **Replace Spaces:**
    * **Approach:** A simple and clear **iterative approach** was used. The function iterates through the original string character by character.
        * If the current character is a space, the sequence `@40` is appended to a new temporary string.
        * Otherwise, the character itself is appended.
    * This method builds the modified string in a new variable, resulting in a time complexity of `O(N)` and a space complexity of `O(N)`.

2.  **`getline()` Function:**
    * **Concept:** Learned that `std::cin` stops reading input at the first whitespace character. To read a full line of text, including spaces, `getline(cin, str)` is the correct tool to use.

---
*Great job learning an essential C++ input function alongside solving the problem!*