# DSA Challenge: Day 9 Highlights

**Date:** February 13, 2024

---

## 🎯 Today's Focus: Introduction to Arrays

Day 9 marked the official start of Data Structures, beginning with the most fundamental one: **Arrays**. The session focused on both the theoretical aspects of arrays and their practical application by solving a variety of common introductory problems.

A comprehensive guide covering array theory, memory allocation, advanced concepts like the Two-Pointer Approach, and an introduction to C++ Vectors was created in `array.md`.

---

## ✅ Progress Summary

-   **Total Problems Solved:** 9
-   **Primary Language:** C++
-   **Key Deliverable:** Created a detailed guide to **Arrays and Vectors** in `array.md`.

---

## 🧠 Key Learnings & Approaches

Today's session focused on implementing common array operations and algorithms. Here are the approaches used for each problem:

1.  **Find Min and Max No in an Array:**

    -   **Approach:** Iterated through the array while keeping track of the minimum and maximum values seen so far, updating them as new extremes were found.

2.  **Find Sum of All Elements in an Array:**

    -   **Approach:** Used a simple loop to traverse the array, accumulating the sum of all elements in a single variable.

3.  **Find Unique Element in an Array:**

    -   **Approach:** Leveraged the **XOR bitwise operator (`^`)** in a single loop; XORing all elements cancels out the duplicate pairs, leaving only the unique number.

4.  **Print All Pairs in an Array:**

    -   **Approach:** Implemented a nested loop where the outer loop fixes the first element of the pair and the inner loop iterates through the rest of the array to form all possible pairs.

5.  **Print All Subarrays:**

    -   **Approach:** Used a triply nested loop to define the start and end points of all possible contiguous subarrays and then print the elements within that range.

6.  **Print All Triplets:**

    -   **Approach:** A triply nested loop was used where each loop iterates through the array to form every possible combination of three elements.

7.  **Reverse an Array:**

    -   **Approach:** Implemented the efficient **Two-Pointer Approach**, with one pointer at the start and one at the end, swapping elements and moving the pointers inward until they meet.

8.  **Search an Element in an Array:**

    -   **Approach:** A straightforward **Linear Search** was used, iterating through each element of the array to check if it matched the target key.

9.  **Swap Alternate in an Array:**
    -   **Approach:** A single loop was used that increments by two, swapping the element at the current index `i` with the element at `i + 1`.

---

_A great start to data structures with a solid foundation in array manipulation!_
