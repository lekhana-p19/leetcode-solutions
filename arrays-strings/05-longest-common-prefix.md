## Problem: Longest Common Prefix (Easy)
**Link:** https://leetcode.com

### Approach
Scanned characters column by column across all strings matching against the first word. The loop breaks at the very first character mismatch or string termination point.

### Complexity
- Time: O(S) where S is the sum of all characters in all strings.
- Space: O(1)
