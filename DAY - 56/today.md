# DSA Challenge: Day 56 Highlights

**Date:** March 31, 2024

---

## 🎯 Today's Focus: Remove All Occurrences of a Substring

Day 56 continued with string problems, focusing on the challenge of removing all occurrences of a given substring from a main string.

_(Great job staying consistent with the challenge during Ramadan!)_

---

## ✅ Progress Summary

-   **Total Problems Solved:** 1
-   **Primary Language:** C++

---

## 🧠 Key Learnings & Approaches

Today's session focused on leveraging powerful built-in string methods to solve the problem iteratively.

1.  **Remove Occurrence of Substring:**
    -   **Approach:** The solution was implemented using a `while` loop combined with C++ string library functions.
        -   The loop continues as long as the `part` substring is found within the main string `s`.
        -   Inside the loop, `s.find(part)` is used to locate the starting index of the first occurrence of the substring.
        -   `s.erase()` is then called with this starting index and the length of the `part` to remove it.
    -   This process repeats until `s.find(part)` no longer finds any occurrences, resulting in a clean and concise solution.

---

_Excellent work using STL string methods to create a simple and effective solution!_
