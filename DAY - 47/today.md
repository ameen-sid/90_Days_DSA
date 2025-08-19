# DSA Challenge: Day 47 Highlights

**Date:** March 22, 2024

---

## 🎯 Today's Focus: Check if Array is Sorted and Rotated

Day 47 was dedicated to solving an interesting array problem: **Check if an Array is Sorted and Rotated**. The challenge is to determine if an array could have been formed by rotating a sorted array.

---

## ✅ Progress Summary

-   **Total Problems Solved:** 1
-   **Primary Language:** C++

---

## 🧠 Key Learnings & Approaches

Today's session focused on identifying the unique property of a sorted and rotated array.

1.  **Check if Array is Sorted and Rotated:**
    -   **Approach:** The solution is based on a simple but clever observation: a sorted and rotated array can have at most **one** point where the order "breaks" (i.e., where a preceding element is greater than a succeeding element).
    -   The algorithm iterates through the array once, counting the number of times `nums[i-1] > nums[i]`. It also checks for a "break" between the last and the first element (`nums[n-1] > nums[0]`).
    -   If the total count of such breaks is less than or equal to 1, the array is a valid sorted and rotated array. This covers both a perfectly sorted array (0 breaks) and a rotated one (1 break).

---

_A great session on solving an array problem by identifying its core logical property!_
