## Problem: Valid Anagram (Easy)
**Link:** https://leetcode.com

### Approach
Used a fixed-size integer array of length 26 as a frequency counter mapping to the alphabet. We increment frequencies for string `s` and decrement for string `t`, checking at the end if all counts balance out to 0.

### Complexity
- Time: O(N)
- Space: O(1)

### Notes
Learned that using a fixed 26-element array operates in O(1) auxiliary space rather than dynamically checking character sets with an O(N^2) nested search strategy.
