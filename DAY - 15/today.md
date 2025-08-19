# DSA Challenge: Day 15 Highlights

**Date:** February 19, 2024

---

## 🎯 Today's Focus: Introduction to Searching Algorithms

Day 15 marked the beginning of a new topic: **Searching Algorithms**. The session was dedicated to understanding and implementing the two most fundamental search techniques, providing a clear contrast between linear and logarithmic time complexities.

---

## ✅ Progress Summary

-   **Total Problems Solved:** 2
-   **Primary Language:** C++

---

## 🧠 Key Learnings & Approaches

Today's session focused on the core logic behind finding elements in a data structure.

1.  **Linear Search:**

    -   **Approach:** This was implemented using a simple **iterative scan**. The algorithm starts at the first element of the array and checks each element sequentially until either the target element is found or the end of the array is reached. This method is straightforward but has a time complexity of `O(N)` as it may need to check every element in the worst case.

2.  **Binary Search:**
    -   **Approach:** This was implemented using the efficient **"divide and conquer"** strategy. The algorithm requires the array to be **sorted**. It works by repeatedly dividing the search interval in half. It compares the middle element of the interval with the target value. If they are not equal, the half in which the target cannot lie is eliminated, and the search continues on the remaining half. This reduces the search space exponentially, resulting in a time complexity of `O(log N)`.

---

_A great start to searching algorithms, establishing a clear understanding of the trade-offs between simplicity and efficiency._
