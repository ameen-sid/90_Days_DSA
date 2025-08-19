# DSA Challenge: Day 81 Highlights

**Date:** April 24, 2024

---

## 🎯 Today's Focus: Minimum Amount of Time to Collect Garbage

Day 81 was dedicated to solving the **Minimum Amount of Time to Collect Garbage** problem, which involves calculating the total time required for garbage trucks to pick up various types of garbage and travel between houses.

---

## ✅ Progress Summary

-   **Total Problems Solved:** 1
-   **Primary Language:** C++

---

## 🧠 Key Learnings & Approaches

Today's session focused on optimizing the calculation of both pick-up and travel times for multiple garbage types.

### 1. Minimum Amount of Time to Collect Garbage

-   **Approach:** The solution efficiently calculates the time by separately tracking the pick-up time and travel time for each type of garbage (Paper 'P', Glass 'G', Metal 'M').

    -   **Pick-Up Time Calculation:**
        -   The code iterates through each house's garbage `string` to count the occurrences of 'P', 'G', and 'M'. Each count directly contributes to the pick-up time (each unit of garbage takes 1 unit of time to pick up).
    -   **Last Occurrence Tracking:**
        -   Crucially, for each garbage type, the **index of the last house** where that type of garbage is found is recorded (`lastP`, `lastG`, `lastM`). This is important because a garbage truck only needs to travel up to the last house where it collects its specific type of garbage.
    -   **Travel Time Calculation:**
        -   The `travel` vector contains the time taken to travel between consecutive houses. For each garbage type, the travel time is accumulated by summing up the `travel` times from the start (house 0) up to the `last` house for that specific garbage type. For example, `travelP` sums `travel[0]` to `travel[lastP - 1]`.
    -   **Total Time:**
        -   The final answer is the sum of (pick time + travel time) for each of the three garbage types.

-   **Time Complexity:**
    -   The first loop iterates through all houses and all characters in their respective garbage strings. Let $N$ be the number of houses and $L$ be the maximum length of a garbage string. This part takes $O(N \cdot L)$.
    -   The three subsequent loops for calculating `travelP`, `travelG`, and `travelM` iterate up to $N-1$ times in the worst case. This part takes $O(N)$.
    -   Therefore, the **overall time complexity is $O(N \cdot L)$**, which simplifies to $O(\text{Total characters in all garbage strings})$ or $O(N)$ if $L$ is considered constant. This is an efficient approach as it processes each character and each travel segment only a few times.

---

_An insightful day involving careful tracking of multiple variables to achieve an optimal solution for a resource allocation type problem!_
