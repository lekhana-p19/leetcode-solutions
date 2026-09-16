#include <stdio.h>
#include <string.h>

// LeetCode core function block
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

int main()
{
    // --- Part C: Local Testing ---
    // Test Case 1: Standard string match
    char str1[] = "hello";
    printf("Test 1 Original: %s\n", str1);
    reverseString(str1, 5);
    printf("Test 1 Reversed: %s (Expected: olleh)\n\n", str1);

    // Test Case 2: Edge Case (Single Character)
    char str2[] = "A";
    printf("Test 2 Original: %s\n", str2);
    reverseString(str2, 1);
    printf("Test 2 Reversed: %s (Expected: A)\n", str2);

    return 0;
}
