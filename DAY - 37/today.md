# DSA Challenge: Day 37 Highlights

**Date:** March 12, 2024

---

## 🎯 Today's Focus: EKO - SPOJ (Binary Search on the Answer)

Day 37 was dedicated to solving the classic competitive programming problem **EKO from SPOJ**. This problem is another excellent example of the "Binary Search on the Answer" pattern, similar to the Aggressive Cows problem, where the goal is to find the maximum value that satisfies a given condition.

---

## ✅ Progress Summary

-   **Total Problems Solved:** 1
-   **Primary Language:** C++

---

## 🧠 Key Learnings & Approaches

Today's session was about applying the binary search on the answer strategy to a resource collection problem.

1.  **EKO - SPOJ:**
    -   **Approach:** The problem asks to find the maximum possible height to set the saw blade to obtain at least a required amount of wood. This is a **maximization problem** perfectly suited for **Binary Search on the Answer**.
    -   **Search Space:** The range of possible heights for the saw blade is from `0` (lowest possible height) to the `height of the tallest tree` in the forest.
    -   **Predicate Function (`isPossibleSol`):** A helper function was created to check if a given height `mid` is a valid solution. It calculates the total wood collected by summing up `tree_height - mid` for every tree taller than `mid`. If this total is greater than or equal to the required amount of wood, `mid` is a possible height.
    -   **Binary Search Logic:**
        -   If `isPossibleSol(mid)` is `true`, it means we can achieve the target with height `mid`. We store this as a potential answer and try for an even better (higher) height by searching in the right half (`start = mid + 1`).
        -   If `isPossibleSol(mid)` is `false`, the height `mid` is too high, and we aren't collecting enough wood. We must search for a lower height in the left half (`end = mid - 1`).

---

_Another great day reinforcing the "Binary Search on the Answer" pattern for optimization problems!_
