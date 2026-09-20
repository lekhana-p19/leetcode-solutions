## Problem: Binary Search (Easy)

**Link:** [My Accepted Solution – Binary Search](https://leetcode.com/problems/binary-search/submissions/2147628221/)

# Intuition

Binary Search is used to find a target value in a sorted array.

Instead of checking every element one by one, we check the middle element and remove half of the search area each time.

# Approach

Start with two variables:

- `left` at the beginning of the array.
- `right` at the end of the array.

Find the middle position.

If the middle element is equal to the target, return its index.

If the middle element is smaller than the target, search the right half.

Otherwise, search the left half.

If the target is not found, return `-1`.

# Complexity

- Time complexity: $O(\log n)$ because half of the search area is removed in every iteration.
- Space complexity: $O(1)$ because only a few variables are used.

# Notes

For the input `[-1,0,3,5,9,12]` and target `9`, the target is found at index `4`.

# Code

```c
int search(int* nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (nums[mid] == target) {
            return mid;
        }

        if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}