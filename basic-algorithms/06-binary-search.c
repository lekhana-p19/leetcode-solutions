#include <stdio.h>

// Core LeetCode Logic
void moveZeroes(int *nums, int numsSize)
{
    int lastNonZeroFoundAt = 0;

    // Move all non-zero elements forward
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != 0)
        {
            int temp = nums[i];
            nums[i] = nums[lastNonZeroFoundAt];
            nums[lastNonZeroFoundAt] = temp;
            lastNonZeroFoundAt++;
        }
    }
}

int main()
{
    // --- Part C: Local Testing ---

    // Test Case 1: Typical case with mixed zeros
    int nums1[] = {0, 1, 0, 3, 12};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    moveZeroes(nums1, size1);

    printf("Test 1: ");
    for (int i = 0; i < size1; i++)
        printf("%d ", nums1[i]);
    printf("\nExpected: 1 3 12 0 0\n\n");

    // Test Case 2: Edge case (No zeros)
    int nums2[] = {4, 5, 6};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    moveZeroes(nums2, size2);

    printf("Test 2: ");
    for (int i = 0; i < size2; i++)
        printf("%d ", nums2[i]);
    printf("\nExpected: 4 5 6\n");

    return 0;
}
