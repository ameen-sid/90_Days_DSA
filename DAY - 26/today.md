# DSA Challenge: Day 26 Highlights

**Date:** March 1, 2024

---

## 🎯 Today's Focus: Finding the Majority Element

Day 26 was dedicated to solving the **Majority Element Problem**, which asks to find the element that appears more than `n/2` times in an array. The session focused on implementing a highly efficient, single-pass algorithm to solve this classic problem.

---

## ✅ Progress Summary

-   **Total Problems Solved:** 1
-   **Primary Language:** C++

---

## 🧠 Key Learnings & Approaches

Today's session was about understanding and implementing a non-obvious, optimized algorithm that avoids the need for extra space.

1.  **Find Majority Element In an Array:**
    -   **Approach:** The problem was solved using **Moore's Voting Algorithm**, a two-phase process that finds the majority element in `O(N)` time and `O(1)` space.
        -   **Phase 1: Finding a Candidate:** The algorithm iterates through the array, maintaining a `candidate` element and a `count`. The `count` is incremented when the current element matches the candidate and decremented otherwise. If the `count` reaches zero, the current element becomes the new candidate. The logic is that the votes of the majority element will ultimately outnumber all other votes combined, leaving it as the final candidate.
        -   **Phase 2: Verifying the Candidate:** A second pass is made through the array to count the actual occurrences of the candidate found in Phase 1. If its frequency is greater than `n/2`, it is confirmed as the majority element.

---

_A great session on a classic algorithm that demonstrates a very clever approach to solving array problems efficiently._
