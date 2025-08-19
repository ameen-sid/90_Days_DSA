# DSA Challenge: Day 34 Highlights

**Date:** March 9, 2024

---

## 🎯 Today's Focus: Custom Comparators for Sorting

Day 34 was dedicated to a powerful feature of the C++ Standard Template Library (STL): **Custom Comparators**. The session focused on how to write custom comparison functions to extend the behavior of `std::sort` beyond its default ascending order, enabling sorting based on complex or specific criteria.

---

## ✅ Progress Summary

-   **Total Problems Solved:** 1 (Conceptual Implementation)
-   **Primary Language:** C++

---

## 🧠 Key Learnings & Approaches

Today's session was about gaining control over the sorting logic provided by the STL.

1.  **Custom Comparator:**
    -   **Approach:** The `std::sort` function in C++ can accept an optional third argument: a **comparator function**. This is a boolean function that takes two elements as input and returns `true` if the first element should come before the second in the sorted order.
    -   **1D Vector Example:** A custom comparator `myComp` was created to sort a simple vector of integers in descending order by returning `a > b`.
    -   **2D Vector Example:** A more advanced comparator `myCompFor1stIndex` was implemented to sort a vector of vectors. This function was designed to sort the 2D vector based on the values in the second column (index 1) in descending order, demonstrating how to apply custom logic to complex data structures.

---

_A great session on a crucial C++ STL feature that provides immense flexibility for sorting data._
