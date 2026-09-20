## Problem: Reverse String (Easy)

**Link:** [My Accepted Solution – Reverse String](https://leetcode.com/problems/reverse-string/submissions/2147619644/)

# Intuition
To reverse a string without using any extra memory array, we can modify it directly by swapping elements from both ends toward the middle.

# Approach
Implemented an in-place two-pointer technique. By initializing a `left` index pointer at zero and a `right` index pointer at the end of the array (`sSize - 1`), elements are swapped symmetrically using a temporary character variable while converging toward the center until the pointers cross.

# Complexity
- Time complexity: $O(n)$ where $n$ is the total number of characters, since we process each element exactly once.
- Space complexity: $O(1)$ auxiliary modification space because the alteration is done entirely in-place without extra storage structures.

# Notes
Single-character strings or symmetric odd-length string layouts cleanly exit the `while (left < right)` loop condition instantly without introducing array boundary index corruptions.

# Code
```c
void reverseString(char* s, int sSize) {
    int left = 0;
    int right = sSize - 1;

    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}