## Problem: Best Time to Buy and Sell Stock (Easy)
**Link:** https://leetcode.com

### Approach
Used a single-pass greedy approach tracking the lowest price seen so far. For each stock price encounter, we calculate the potential profit and update our maximum profit if the current trade yields higher returns.

### Complexity
- Time: O(N)
- Space: O(1)

### Notes
Avoided an O(N^2) brute-force nested loop configuration, allowing the single-pass loop system to complete successfully without running into LeetCode Time Limit Exceeded errors.
