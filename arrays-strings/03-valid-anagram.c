#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Exact function signature required by LeetCode
bool isAnagram(char *s, char *t)
{
    int lenS = strlen(s);
    int lenT = strlen(t);

    // If lengths match different, they cannot be anagrams
    if (lenS != lenT)
    {
        return false;
    }

    // Fixed frequency tracker for 26 lowercase English letters
    int count[26] = {0};

    // Increment for string s and decrement for string t
    for (int i = 0; i < lenS; i++)
    {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    // If all character frequencies match zero, it is an anagram
    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            return false;
        }
    }

    return true;
}

// PART C: Local Test Cases required by assignment rubric
int main()
{
    // Test Case 1: Typical Case (True Anagram)
    char s1[] = "anagram";
    char t1[] = "nagaram";
    printf("Test 1 (Typical): s = \"%s\", t = \"%s\"\n", s1, t1);
    printf("Expected: True -> Output: %s\n\n", isAnagram(s1, t1) ? "True" : "False");

    // Test Case 2: Edge Case (False Anagram / Different Characters)
    char s2[] = "rat";
    char t2[] = "car";
    printf("Test 2 (Edge): s = \"%s\", t = \"%s\"\n", s2, t2);
    printf("Expected: False -> Output: %s\n", isAnagram(s2, t2) ? "True" : "False");

    return 0;
}
