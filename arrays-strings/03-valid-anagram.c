#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

// Core logic for LeetCode evaluation
bool isAnagram(char *s, char *t)
{
    if (strlen(s) != strlen(t))
        return false;

    int count[26] = {0};

    for (int i = 0; s[i] != '\0'; i++)
    {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
            return false;
    }

    return true;
}

// This wrapper prevents LeetCode from crashing while keeping VS Code happy!
#ifndef LEETCODE
int main()
{
    // Test Case 1: Standard anagram match
    char s1[] = "anagram";
    char t1[] = "nagaram";
    printf("Test 1 (anagram, nagaram): %s (Expected: True)\n", isAnagram(s1, t1) ? "True" : "False");

    // Test Case 2: Edge case (Different letters, same length)
    char s2[] = "rat";
    char t2[] = "car";
    printf("Test 2 (rat, car): %s (Expected: False)\n", isAnagram(s2, t2) ? "True" : "False");

    return 0;
}
#endif
