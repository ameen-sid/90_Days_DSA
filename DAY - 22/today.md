# DSA Challenge: Day 22 Highlights

**Date:** February 26, 2024

---

## 🎯 Today's Focus: Advanced Binary Search Variations

Day 22 continued to push the boundaries of **Binary Search**, applying it to problems where the standard algorithm needs significant modification. The session focused on using binary search for mathematical operations, on arrays with specific pairing properties, and on arrays that are not perfectly sorted.

---

## ✅ Progress Summary

-   **Total Problems Solved:** 3
-   **Primary Language:** C++

---

## 🧠 Key Learnings & Approaches

Today's session was about creative problem-solving and adapting the core binary search logic to fit unique constraints.

1.  **Divide Two Numbers:**

    -   **Approach:** This problem was solved using **Binary Search on the Answer**. The search space for the quotient is the range of integers from `0` to the `dividend`. The algorithm binary searches for a `mid` value such that `mid * divisor` is as close as possible to the `dividend` without exceeding it. This efficiently finds the integer part of the quotient in `O(log N)` time. The final sign of the result is handled separately based on the signs of the original inputs.

2.  **Find The Odd Occurring Element:**

    -   **Approach:** A clever **modified Binary Search** was used, leveraging the fact that all elements except one appear in pairs. The key insight is that in the part of the array before the single element, the first instance of any pair is at an even index, and the second is at an odd index. This pattern breaks after the single element.
        -   If `mid` is at an even index and `arr[mid] == arr[mid + 1]`, the single element must be to the right.
        -   If `mid` is at an odd index and `arr[mid] == arr[mid - 1]`, the single element must be to the right.
        -   Otherwise, the single element is to the left. This logic allows the search space to be halved at each step.

3.  **Search In a Nearly Sorted Array:**
    -   **Approach:** This problem was solved with a **modified Binary Search** to account for the "nearly sorted" property (where an element can be at `i-1`, `i`, or `i+1`). In each step of the binary search, instead of just checking `arr[mid]`, the algorithm checks the element at `mid` as well as its immediate neighbors (`mid-1` and `mid+1`). If the target is not found at any of these three positions, the search space can be safely reduced by moving the `start` or `end` pointers by `2`, maintaining the `O(log N)` complexity.

---

_A challenging day that really stretched the application of binary search to new types of problems!_
