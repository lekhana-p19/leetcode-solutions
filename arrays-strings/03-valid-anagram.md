## Problem: Valid Anagram (Easy)

**Link:** [My Accepted Solution – Valid Anagram](https://leetcode.com/problems/valid-anagram/submissions/2147616988/)

# Intuition
An anagram contains the exact same characters with the exact same frequencies. We can verify this using a compact frequency tracking array combined with pointer arithmetic for efficient traversal.

# Approach
Implemented a minimal 26-element counter array mapping to lowercase English letters. The function utilizes pointer operations (`*s++` and `*t++`) to step through each character string directly, incrementing for elements present in `s` and decrementing for elements in `t`. A single terminal verification loop ensures all indices evaluate down to zero.

# Complexity
- Time complexity: $O(n)$ where $n$ corresponds to the length of the strings, passing through the character vectors linearly.
- Space complexity: $O(1)$ auxiliary tracking allocation since our memory utilization is confined to a fixed 26-integer vector array structure.

# Notes
Leveraging direct pointer evaluation avoids extra performance passes from length evaluations (`strlen`), minimizing the memory blueprint and code statement overhead.

# Code
```c
bool isAnagram(char* s, char* t) {
    int count[26] = {0};
    while (*s) count[*s++ - 'a']++;
    while (*t) count[*t++ - 'a']--;
    for (int i = 0; i < 26; i++) if (count[i] != 0) return false;
    return !*s && !*t;
}