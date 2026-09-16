## Problem: Move Zeroes (Easy)
**Link:** https://leetcode.com

### Approach
Used a two-pointer approach where `lastNonZeroFoundAt` tracks the position where the next non-zero element should go. As we iterate through the array, whenever a non-zero element is encountered, it swaps places with the tracking pointer.

### Complexity
- Time: O(N) since we perform a single linear traversal across the array.
- Space: O(1) because elements are rearranged in-place without using extra storage.

### Notes
Swapping values instantly handles filling the trailing spaces with zeroes naturally, which is cleaner than shifting all elements forward and filling the rest with zeroes in a separate loop.
