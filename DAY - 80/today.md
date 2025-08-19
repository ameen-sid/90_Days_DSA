# DSA Challenge: Day 80 Highlights

**Date:** April 23, 2024

---

## 🎯 Today's Focus: Decode the Message

Day 80 was dedicated to solving the **Decode the Message** problem, which involves deciphering a secret message based on a given substitution key.

---

## ✅ Progress Summary

-   **Total Problems Solved:** 1
-   **Primary Language:** C++

---

## 🧠 Key Learnings & Approaches

Today's session focused on character mapping and efficient string processing.

### 1. Decode the Message

-   **Approach:** The solution uses a **character mapping** technique.
    -   A mapping is created from the characters in the `key` to the lowercase English alphabet, starting from 'a'.
    -   The first occurrence of each unique character in the `key` (excluding spaces) determines its corresponding decoded character. For example, if 't' is the first unique character, it maps to 'a'; if 'h' is the second, it maps to 'b', and so on.
    -   An array (or hash map) is used to store this mapping for quick lookups.
    -   Once the mapping is established, the `message` is iterated through. Each character in the message is replaced with its corresponding decoded character from the mapping. Spaces are preserved as they are.

-   **Time Complexity:**
    -   The creation of the mapping iterates through the `key` once ($O(N)$, where $N$ is the length of the key).
    -   Decoding the message iterates through the `message` once ($O(M)$, where $M$ is the length of the message).
    -   Therefore, the **overall time complexity is $O(N + M)$**, which is very efficient as it's directly proportional to the combined lengths of the input strings.

---

_A great day on tackling a practical string decoding problem with a clear and efficient mapping strategy!_