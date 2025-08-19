# DSA Challenge: Day 79 Highlights

**Date:** April 23, 2024

---

## 🎯 Today's Focus: Palindromic Substring

Day 79 was dedicated to solving the **Palindromic Substring** problem, focusing on counting all possible palindromic substrings within a given string.

---

## ✅ Progress Summary

-   **Total Problems Solved:** 1
-   **Primary Language:** C++

---

## 🧠 Key Learnings & Approaches

Today's session explored an efficient approach to identifying and counting palindromic substrings.

### 1. Palindromic Substring

-   **Approach:** The solution employs an **"expand around center"** technique.

    -   Every character in the string can be considered as the potential center of an **odd-length palindrome** (e.g., "aba").
    -   Similarly, the space between every two adjacent characters can be considered as the potential center of an **even-length palindrome** (e.g., "abba").
    -   For each potential center, the `expand` function is called. This function expands outwards from the center(s) as long as the characters match, incrementing a count for each valid palindrome found.
    -   The total count of palindromic substrings is the sum of counts from all odd and even expansions.

-   **Time Complexity:**
    -   `expand` function: $O(N)$ (in the worst case, it can traverse the entire string)
    -   `countSubstring` function: $O(N^2)$ (it calls `expand` $N$ times)

---

_A solid day focusing on string manipulation and optimizing palindrome detection!_
