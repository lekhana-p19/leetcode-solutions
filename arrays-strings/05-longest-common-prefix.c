#include <stdio.h>
#include <string.h>

char *longestCommonPrefix(char **strs, int strsSize)
{
    if (strsSize == 0)
        return "";

    for (int i = 0; strs[0][i] != '\0'; i++)
    {
        char c = strs[0][i];
        for (int j = 1; j < strsSize; j++)
        {
            if (strs[j][i] == '\0' || strs[j][i] != c)
            {
                strs[0][i] = '\0';
                return strs[0];
            }
        }
    }
    return strs[0];
}

int main()
{
    // --- Part C: Local Testing ---
    char *test1[] = {"flower", "flow", "flight"};
    printf("Test 1 Result: %s\n", longestCommonPrefix(test1, 3)); // Expected: fl

    char *test2[] = {"dog", "racecar", "car"};
    printf("Test 2 Result: %s\n", longestCommonPrefix(test2, 3)); // Expected: empty
    return 0;
}
