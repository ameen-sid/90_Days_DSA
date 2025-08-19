# DSA Challenge: Day 42 Highlights

**Date:** March 17, 2024

---

## 🎯 Today's Focus: C++ STL - Priority Queue

Day 42 was dedicated to learning about another important container adaptor in the C++ STL: **`std::priority_queue`**. The session focused on understanding its underlying heap data structure and how it can be configured to create both max heaps and min heaps.

---

## ✅ Progress Summary

-   **Topics Covered:** C++ STL `std::priority_queue`, Max Heap, Min Heap.
-   **Primary Language:** C++

---

## 🧠 Key Learnings & Approaches

Today's session was about understanding a container that automatically keeps elements sorted based on priority.

1.  **`std::priority_queue`:**
    -   **Concept:** Understood that a `priority_queue` is a container where elements are always retrieved in a specific order (highest or lowest priority first), regardless of the order they were inserted in.
    -   **Max Heap (Default):** By default, `std::priority_queue<int>` creates a max heap. This means that the largest element is always at the top of the queue.
    -   **Min Heap:** Learned how to create a min heap by providing additional template arguments: `priority_queue<int, vector<int>, greater<int>>`. In a min heap, the smallest element is always at the top.
    -   **Key Functions Practiced:**
        -   **`push()`**: To add an element to the queue, which is then automatically placed according to its priority.
        -   **`pop()`**: To remove the top-priority element.
        -   **`top()`**: To access the top-priority element without removing it.
        -   **`size()`**: To get the number of elements in the queue.

---

_A great session on a powerful data structure that is essential for many algorithms involving priority and scheduling._
