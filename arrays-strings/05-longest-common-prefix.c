#include <stdio.h>

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
    char str1[] = "flower";
    char str2[] = "flow";
    char str3[] = "flight";
    char *test1[] = {str1, str2, str3};

    printf("Test 1 Result: %s\n", longestCommonPrefix(test1, 3));

    char str4[] = "dog";
    char str5[] = "racecar";
    char str6[] = "car";
    char *test2[] = {str4, str5, str6};

    printf("Test 2 Result: %s\n", longestCommonPrefix(test2, 3));

    return 0;
}