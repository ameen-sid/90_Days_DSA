# DSA Challenge: Day 77 Highlights

**Date:** April 21, 2024

---

## 🎯 Today's Focus: Remove All Occurrences of a Substring

Day 77 was dedicated to revisiting the problem of removing all occurrences of a substring from a main string. This session focused on reinforcing the use of built-in C++ string methods to solve the problem efficiently.

---

## ✅ Progress Summary

-   **Total Problems Solved:** 1
-   **Primary Language:** C++

---

## 🧠 Key Learnings & Approaches

Today's session was about solidifying the iterative approach for substring removal.

1.  **Remove All Occurrences of a Substring:**
    -   **Approach:** The solution uses a `while` loop that continues as long as the `part` substring can be found within the main string `s`.
        -   `s.find(part)` is used to check for the existence of the substring.
        -   If found, `s.erase()` is called to remove the first occurrence.
    -   This process repeats until no more instances of the `part` are found, ensuring all occurrences are removed.

---

_A good session reinforcing the practical use of the C++ string library for complex modifications._
