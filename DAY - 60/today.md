# DSA Challenge: Day 60 Highlights

**Date:** April 4, 2024

---

## 🎯 Today's Focus: Permutation in String

Day 60 marked a return to the challenge after a short break, tackling the classic string problem **Permutation in String**. This problem is an excellent application of the sliding window technique.

_(Welcome back! Great to see you continuing the challenge during Ramadan.)_

---

## ✅ Progress Summary

-   **Total Problems Solved:** 1
-   **Primary Language:** C++

---

## 🧠 Key Learnings & Approaches

Today's session focused on using a fixed-size sliding window to efficiently find a permutation.

1.  **Permutation in String:**
    -   **Approach:** The problem was solved using the **Sliding Window** technique combined with **frequency arrays**.
        1.  **Character Count:** First, a frequency array (`count1`) of size 26 is created to store the character counts of the pattern string (`s1`).
        2.  **Initial Window:** A second frequency array (`count2`) is created for the first "window" in the main string (`s2`), with the window size being the length of `s1`.
        3.  **Slide and Compare:** The algorithm then slides this window across the rest of `s2` one character at a time. In each step, it efficiently updates `count2` by incrementing the count for the new character entering the window and decrementing the count for the character leaving it.
        4.  After each slide, the two frequency arrays are compared. If they are identical at any point, it means a permutation has been found.

---

_Fantastic job getting back on track with a classic and important string algorithm!_
