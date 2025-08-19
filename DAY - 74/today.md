# DSA Challenge: Day 74 Highlights

**Date:** April 18, 2024

---
## 🎯 Today's Focus: Check if String is Palindrome

Day 74 was a back-to-basics session, revisiting the classic string problem: **Check if a String is a Palindrome**. This is a fundamental problem that reinforces the two-pointer technique.

---
## ✅ Progress Summary

* **Total Problems Solved:** 1
* **Primary Language:** C++

---
## 🧠 Key Learnings & Approaches

Today's session focused on an efficient, in-place method for palindrome checking.

1.  **Check if String is Palindrome or Not:**
    * **Approach:** The problem was solved using the classic **Two-Pointer technique**.
        * An `i` pointer starts at the beginning of the string, and a `j` pointer starts at the end.
        * The pointers move towards each other. In each step, the characters at `str[i]` and `str[j]` are compared. If at any point they do not match, the function immediately returns `false`.
        * If the loop completes without finding any mismatches (meaning the pointers have met or crossed), the function returns `true`.

---
*A good session reinforcing a core string algorithm.*