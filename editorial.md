# Editorial — Matrix of Equality

## Problem Overview

You're given two integers n rows and k columns, and you are asked to construct an n times k matrix such that:

1. Each column is a **permutation** of the numbers from 1 to n.
2. Each row has the **same sum**.

If such a matrix is possible, you should print `YES` and the matrix. Otherwise, print `NO`.

---

## Observations

Let’s denote:

- R_i — the sum of the i-th row.
- Since every column must be a permutation of `[1, 2, ..., n]`, each column’s total sum is always `n(n + 1)/2`.
- Therefore, the **total sum** of the matrix is `k times n(n + 1)/2`.
- If all row sums are equal, then each row must sum to:
  target_sum = [k times n(n + 1)]/2n = k(n + 1)/2
- Thus, k(n + 1)/2 must be an integer.

---

### Case 1: Even k

For even number of columns, construct the columns in alternating ascending and descending order:

- Column 1: \( [1, 2, ..., n] \)
- Column 2: \( [n, ..., 2, 1] \)
- Column 3: \( [1, 2, ..., n] \)
- Column 4: \( [n, ..., 2, 1] \)

This way, for each row:
- The sum of values in column pairs is \( (i + 1) + (n - i) = n + 1 \)
- Total row sum: k(n + 1)/2, which is constant across all rows. <br>

All columns are permutations, and all rows sum to the same total.

---

### Case 2: Odd k

This is trickier. Suppose k is odd and greater than or equal to 3.

1. We build the first `k - 3` columns using the same alternating logic as before.
2. For the remaining three columns:
   - Column \( k - 2 \): standard ascending permutation \( [1, 2, ..., n] \)
   - Column \( k - 1 \): shuffle using odds then evens: \( [1, 3, 5, ..., 2, 4, 6, ...] \)
   - Column \( k \): compute the required value to match the target row sum

For each row \( i \), compute:
matrix[i][k - 1] = \text{target\_sum} - \sum_{j=1}^{k-1} matrix[i][j]

Ensure that:
- matrix[i][k-1] in [1, n]
- All values in the column are unique (i.e., a valid permutation)
If any value is out of bounds or repeated, output `NO`.

---

### Case 3: k = 1

This will always be possible, for any n.

---

## Complexity

- **Time complexity:** \( O(nk) \) — we visit each matrix cell at most once
- **Space complexity:** \( O(nk) \)

---
