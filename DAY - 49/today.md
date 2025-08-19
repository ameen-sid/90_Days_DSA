# DSA Challenge: Day 49 Highlights

**Date:** March 24, 2024

---

## 🎯 Today's Focus: Three Sum Problem

Day 49 was dedicated to solving the classic **Three Sum** problem. The challenge is to determine if there exists a triplet of elements in an array that sums up to a given target value. The session focused on contrasting the naive brute-force solution with a highly optimized approach.

---

## ✅ Progress Summary

-   **Total Problems Solved:** 1
-   **Primary Language:** C++

---

## 🧠 Key Learnings & Approaches

Today's session was about reducing a problem's complexity by leveraging sorting and the two-pointer technique.

1.  **Three Sum:**
    -   **Brute-Force Approach:** An `O(N^3)` solution was implemented using three nested loops. This method checks every possible unique combination of three elements in the array to see if they sum to the target. While straightforward, it is highly inefficient for large datasets.
    -   **Optimized (Two-Pointer Approach):** A much more efficient `O(N^2)` solution was implemented. The key steps are:
        1.  **Sort the array** first. This takes `O(N log N)` time.
        2.  Iterate through the array with a single `for` loop, fixing one element `arr[i]`.
        3.  For each fixed element, use the **two-pointer technique** on the rest of the array (from `i+1` to the end) to find two other elements that sum up to `target - arr[i]`. This inner two-pointer scan takes `O(N)` time.
    -   This approach significantly reduces the time complexity and is the standard way to solve this problem efficiently.

---

_A great session on a very common interview problem that shows the power of combining sorting with the two-pointer pattern._
