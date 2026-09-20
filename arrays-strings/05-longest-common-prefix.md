## Problem: Longest Common Prefix (Easy)

**Link:** [My Accepted Solution – Longest Common Prefix](https://leetcode.com/problems/longest-common-prefix/submissions/2147626304/)

# Intuition

We need to find the common starting characters present in all the given strings.

# Approach

First, take the first string as the reference.

Check each character of the first string with the same position in all the other strings.

If any character is different, stop and return the common part found so far.

If the character is the same in all strings, continue to the next character.

# Complexity

- Time complexity: $O(n \times m)$ where `n` is the number of strings and `m` is the length of the shortest string.
- Space complexity: $O(1)$ because only a few variables are used.

# Notes

For the input `["flower", "flow", "flight"]`, the longest common prefix is `"fl"`.

# Code

```c
char* longestCommonPrefix(char** strs, int strsSize) {
    int i = 0;

    while (strs[0][i] != '\0') {
        char ch = strs[0][i];

        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] != ch) {
                strs[0][i] = '\0';
                return strs[0];
            }
        }

        i++;
    }

    return strs[0];
}
