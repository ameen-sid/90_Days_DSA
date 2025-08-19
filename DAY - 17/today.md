# DSA Challenge: Day 17 Highlights

**Date:** February 21, 2024

---

## 🎯 Today's Focus: Binary Search on the Answer

Day 17 explored a more abstract application of **Binary Search**. Instead of searching for a specific key, the focus was on using the binary search pattern to find an answer based on the properties and structure of the array itself. This is often referred to as "Binary Search on the Answer."

---

## ✅ Progress Summary

-   **Total Problems Solved:** 2
-   **Primary Language:** C++

---

## 🧠 Key Learnings & Approaches

Today's session was about adapting the binary search algorithm to solve problems where the search condition is not a simple equality check.

1.  **Find Missing Element In a Sorted Array:**

    -   **Approach:** This problem was solved using a **modified Binary Search**. In a perfectly sorted array starting from 1, the value at any index `i` should be `i + 1`. Therefore, the difference `nums[i] - i` should always be `1`. The algorithm leverages this property. At each step, it calculates the difference at the `mid` index. If the difference is `1`, it means the first half of the array is intact, and the missing element must be in the right half. If the difference is not `1`, the missing element is in the left half. This allows the search space to be halved in each iteration, achieving an `O(log N)` solution.

2.  **Peak Element In a Mountain:**
    -   **Approach:** This problem was also solved by applying **Binary Search** to the array's structure. The key insight is that for any element `mid`, comparing it with its right neighbor `nums[mid + 1]` tells us which side of the peak we are on. If `nums[mid] < nums[mid + 1]`, we are on the ascending slope, so the peak must lie to the right. If `nums[mid] > nums[mid + 1]`, we are on the descending slope (or at the peak itself), so the peak must be at `mid` or to its left. By narrowing the search space based on this condition, the peak element is found in `O(log N)` time.

---

_A great day of learning how to apply binary search to a broader class of problems by searching on conditions and properties._
