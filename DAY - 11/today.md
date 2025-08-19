# DSA Challenge: Day 11 Highlights

**Date:** February 15, 2024

---

## 🎯 Today's Focus: Introduction to 2D Arrays (Matrices)

Day 11 was dedicated to understanding and manipulating **2D Arrays**. The session focused on foundational operations, including traversal, searching, and basic matrix transformations, which are essential for more complex problems involving grids and tables.

---

## ✅ Progress Summary

-   **Total Problems Solved:** 6
-   **Primary Language:** C++

---

## 🧠 Key Learnings & Approaches

Today's session focused on applying nested loops to perform common operations on 2D arrays. Here are the approaches used for each problem:

1.  **Find Min and Max in 2D Array:**

    -   **Approach:** A standard **nested loop** was used to traverse every element in the matrix. Two variables, initialized to the minimum (`INT16_MIN`) and maximum (`INT16_MAX`) possible integer values, were used to keep track of the extremes. During the traversal, each element of the array was compared with these variables, and they were updated whenever a new maximum or minimum value was found. This ensures that every element is checked, guaranteeing an accurate result.

2.  **Input & Print 2D Array Elements:**

    -   **Approach:** This problem was solved using basic **nested loops** to handle I/O operations. The outer loop iterates through the rows (from `i = 0` to `rows-1`), and the inner loop iterates through the columns (from `j = 0` to `cols-1`). This structure allows for accessing each cell `arr[i][j]` sequentially, first for reading user input and then for printing the matrix to the console.

3.  **Print 2D Array Row-Wise and Column-Wise:**

    -   **Approach:** This demonstrates two different traversal methods.
        -   **Row-Wise Traversal:** A standard nested loop structure `for (row) { for (col) }` was used. This is the natural way to access elements, printing all columns for a given row before moving to the next.
        -   **Column-Wise Traversal:** To achieve this, the loop order was inverted to `for (col) { for (row) }`. The outer loop iterates through each column index, and the inner loop iterates through all the rows for that specific column, effectively printing the matrix column by column.

4.  **Print Sum of Every Row and Every Column:**

    -   **Approach:** Two separate functions with nested loops were implemented.
        -   **Row Sums:** A `sum` variable was initialized to zero at the beginning of the outer (row) loop. The inner (column) loop then traversed the row, adding each element to `sum`. After the inner loop completed, the total sum for that row was printed, and the `sum` was reset for the next row.
        -   **Column Sums:** The same logic was applied, but with the loop order swapped (`for (col) { for (row) }`) to calculate and print the sum for each column.

5.  **Search Element in 2D Array:**

    -   **Approach:** A basic **linear search** was performed on the 2D array. Using nested loops, the algorithm iterates through every single cell of the matrix and compares its value to the `target` value. If a match is found at any point, the function immediately returns `true`. If the loops complete without finding the target, the function returns `false`.

6.  **Transpose of a Matrix:**
    -   **Approach:** An efficient, **in-place transpose** method was used for a square matrix. A nested loop structure was implemented where the inner loop starts from `j = i`. This is a critical optimization that ensures the upper triangle of the matrix is traversed. By swapping each element `matrix[i][j]` with its corresponding element `matrix[j][i]`, the transpose is achieved. Starting `j` from `i` prevents each pair from being swapped twice, which would revert the matrix to its original state.

---

_A solid day of building a strong foundation for working with 2D arrays._
