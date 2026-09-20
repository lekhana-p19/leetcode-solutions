#include <stdio.h>

void moveZeroes(int *nums, int numsSize)
{
    int j = 0;

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != 0)
        {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            j++;
        }
    }
}

int main()
{
    // Test 1
    int nums1[] = {0, 1, 0, 3, 12};

    moveZeroes(nums1, 5);

    printf("Test 1: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", nums1[i]);

    printf("\n");

    // Test 2
    int nums2[] = {1, 2, 3};

    moveZeroes(nums2, 3);

    printf("Test 2: ");
    for (int i = 0; i < 3; i++)
        printf("%d ", nums2[i]);

    printf("\n");

    return 0;
}