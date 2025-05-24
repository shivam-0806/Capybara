## Problem: Matrix of Equality

In a dystopian world torn by Titans, a secret Marleyan lab holds a mysterious rectangular matrix hidden behind the scenes of war. Armin discovers that this matrix holds the key to restoring balance among all people - but only if it satisfies two sacred conditions:<br>
- The matrix has `n` rows and `k` columns.
- Each column must be a permutation of the integers from `1` to `n`.
- The sum of each row must be exactly equal.
<br>
Your task is to construct **any** such matrix or report that it is **not possible**.<br>

### Input format
The input contains two integers: <br>
`n k` <br>
where `n` is the number of rows and `k` is the number of columns.<br>

### Output format
If such a matrix is not possible, print: <br>
`NO`<br>
Otherwise, print:<br>
`YES`<br>
Followed by  lines, each containing  integers - the i-th row of the matrix.<br>

### Constraints
- 1<=`n`<=100
- 1<=`k`<=100
<br>
Sample Input 1 <br>
`4 4`<br>
Sample Output 1 <br>
<pre>YES
1 4 1 4
2 3 2 3
3 2 3 2
4 1 4 1 
</pre>
<br>
Sample input 2 <br>
`3 1`<br>
Sample output 2 <br>
`NO`<br>
