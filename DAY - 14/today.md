# DSA Challenge: Day 14 Highlights

**Date:** February 18, 2024

---

## 🎯 Today's Focus: Classic Array Algorithms

Day 14 was a deep dive into several classic and frequently asked array-based interview problems. The session focused on applying various algorithmic techniques, including the sliding window, two-pointer, and prefix sum methods, to arrive at efficient solutions.

---

## ✅ Progress Summary

-   **Total Problems Solved:** 7
-   **Primary Language:** C++

---

## 🧠 Key Learnings & Approaches

Today's session covered a range of problems that required moving beyond simple brute-force solutions to find optimized algorithms.

1.  **Add Two Numbers In Array Representation:**

    -   **Approach:** The problem was solved by simulating elementary school addition. Using **two pointers** starting from the end of each array (representing the least significant digits), the digits are added along with a `carry`. The process continues through the longer of the two arrays, and any final `carry` is handled. The resulting digits are stored and then reversed to get the final answer.

2.  **Buy And Sell Stocks:**

    -   **Approach:** A highly efficient **single-pass `O(N)` algorithm** was used. The code iterates through the price list, maintaining two variables: `buyPrice` (the minimum price seen so far) and `maxProfit`. If the current price is lower than `buyPrice`, it becomes the new `buyPrice`. Otherwise, the potential profit is calculated (`current price - buyPrice`), and `maxProfit` is updated if this profit is higher.

3.  **Factorial of a Large Number:**

    -   **Approach:** To handle factorials that exceed standard integer limits, an array (vector) was used to store the digits of the result. The logic mimics **manual multiplication**. Starting with `1`, the algorithm multiplies the number in the array by `2`, then `3`, up to `N`. In each multiplication step, it iterates through the digits of the array, updating them and propagating the `carry` forward, expanding the array as needed.

4.  **Find Pivot Index:**

    -   **Brute-Force Approach:** An `O(N^2)` solution where, for each potential pivot index, two separate loops calculate the sum of the elements to the left and the sum of the elements to the right.
    -   **Optimized (Prefix Sum Approach):** An `O(N)` solution that uses extra space. It pre-computes two arrays: `leftSum` (the sum of all elements to the left of each index) and `rightSum` (the sum to the right). A final pass then checks for the index where `leftSum[i] == rightSum[i]`.

5.  **Key Pair (Two Sum):**

    -   **Brute-Force Approach:** A nested loop (`O(N^2)`) checks every possible pair of elements to see if they sum to the target value.
    -   **Optimized (Two-Pointer Approach):** A more efficient `O(N log N)` solution. The array is first **sorted**. Then, a `low` pointer is placed at the start and a `high` pointer at the end. The pointers move inward based on whether their sum is less than, greater than, or equal to the target, finding a valid pair in linear time after the sort.

6.  **Maximum Average Subarray:**

    -   **Brute-Force Approach:** An `O(N*k)` solution that iterates through every possible starting point of a subarray and then calculates the sum of the next `k` elements.
    -   **Optimized (Sliding Window Approach):** An efficient `O(N)` solution. It calculates the sum of the first window of size `k`. Then, it "slides" the window across the array one element at a time by subtracting the element that leaves the window and adding the element that enters, updating the maximum sum at each step.

7.  **Trapping Rainwater:**
    -   **Approach:** An `O(N)` solution using **pre-computation and extra space**. Two arrays, `leftMax` and `rightMax`, are created. `leftMax[i]` stores the tallest bar to the left of index `i`, and `rightMax[i]` stores the tallest to the right. The amount of water trapped above any bar `i` is determined by `min(leftMax[i], rightMax[i]) - height[i]`. The total is the sum of trapped water for all bars.

---

_A challenging but rewarding day tackling some of the most well-known array problems!_
