## Problem: Move Zeroes (Easy)

**Link:** [My Accepted Solution – Move Zeroes](https://leetcode.com/problems/move-zeroes/submissions/2147630989/)

# Intuition

We need to move all zeroes to the end of the array while keeping the order of the non-zero elements the same.

# Approach

Use two variables, `i` and `j`.

Go through the array using `i`. Whenever a non-zero element is found, swap it with the element at position `j`.

Then increase `j`.

This moves all non-zero elements to the front and all zeroes to the end.

# Complexity

- Time complexity: $O(n)$ because the array is traversed once.
- Space complexity: $O(1)$ because no extra array is used.

# Notes

For the input `[0,1,0,3,12]`, the output is `[1,3,12,0,0]`.

The order of the non-zero elements remains the same.

# Code

```c
void moveZeroes(int* nums, int numsSize) {
    int j = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            j++;
        }
    }
}