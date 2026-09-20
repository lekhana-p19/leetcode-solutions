#include <stdio.h>
#include <string.h>

// Exact function signature required by LeetCode
void reverseString(char *s, int sSize)
{
    int left = 0;
    int right = sSize - 1;

    while (left < right)
    {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}

// PART C: Local Test Cases required by assignment rubric
int main()
{
    // Test Case 1: Typical Case ("hello")
    char str1[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    int size1 = 5;

    printf("Test 1 Original: hello\n");
    reverseString(str1, size1);
    printf("Test 1 Reversed: %s\n\n", str1);

    // Test Case 2: Edge Case (Odd length / Palindrome verification)
    char str2[] = {'H', 'a', 'n', 'n', 'a', 'h', '\0'};
    int size2 = 6;

    printf("Test 2 Original: Hannah\n");
    reverseString(str2, size2);
    printf("Test 2 Reversed: %s\n", str2);

    return 0;
}
