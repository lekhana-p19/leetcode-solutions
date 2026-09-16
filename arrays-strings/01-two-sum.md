## Problem: Addition of Two Numbers
**Link:** Local Implementation

### Approach
The program reads two integers from the user using `scanf()` and stores them in memory variables. It then applies the arithmetic addition operator `+` to compute their total and prints the result back to the console screen.

### Complexity
- Time: O(1) because the mathematical calculation takes constant execution time.
- Space: O(1) as it only allocates a fixed number of integer storage variables.

### Notes
Used simple sequential inputs to ensure clear step-by-step reading from standard keyboard input without complex data structures.

**Link:** https://leetcode.com

### Approach
Used a brute force approach with nested loops to check every potential pair of items in the array. When two values add up directly to the goal target, their indices are packed into memory and returned immediately.

### Complexity
- Time: O(N^2)
- Space: O(1)

### Notes
Confirmed that returnSize must be correctly populated inside the function block so the validation engine handles the array boundary properly.
