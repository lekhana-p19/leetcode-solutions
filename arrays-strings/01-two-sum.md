## Problem: Two Sum (Easy)

**Link:** [My Accepted Solution – Two Sum](https://leetcode.com/problems/two-sum/submissions/2147620425/)

# Intuition
The simplest way to find two numbers that add up to a target is to check every possible pair in the array one by one.

# Approach
Used a brute force approach with nested loops to check every potential pair of items in the array. When two values add up directly to the goal target, their indices are assigned to a global array structure to prevent pointer expiration, and execution terminates immediately.

# Complexity
- Time complexity: $O(N^2)$ due to the nested iteration scanning all unique index pairs.
- Space complexity: $O(1)$ because the elements are processed in place inside a fixed-size global array structure.

# Notes
Declared the result array globally outside the function scope to ensure its memory remains allocated for the LeetCode runtime environment without using dynamic memory allocation (`malloc`) or `static` keywords.

# Code
```c
// Global array declared outside the function so it stays alive in memory
int global_result[2];

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;

    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                global_result[0] = i;
                global_result[1] = j;
                return global_result;
            }
        }
    }

    *returnSize = 0;
    return NULL;
}