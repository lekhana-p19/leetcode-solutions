## Problem: Two Sum (Easy)
**Link:** https://leetcode.com

### Approach
Used a brute force approach with nested loops to check every potential pair of items in the array. When two values add up directly to the goal target, their indices are packed into memory and returned immediately.

### Complexity
- Time: O(N^2)
- Space: O(1)

### Notes
Confirmed that returnSize must be correctly populated inside the function block so the validation engine handles the array boundary properly.
