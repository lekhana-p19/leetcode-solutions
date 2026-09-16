#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    int *result = (int *)malloc(2 * sizeof(int));
    if (result == NULL)
    {
        *returnSize = 0;
        return NULL;
    }
    *returnSize = 2;

    // Brute force logic: Check every element pair
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    return NULL;
}

int main()
{
    int returnSize;

    // --- Part C: Local Testing ---
    // Test Case 1: Typical case
    int nums1[] = {2, 7, 11, 15};
    int target1 = 9;
    int *res1 = twoSum(nums1, 4, target1, &returnSize);
    printf("Test Case 1 (Typical) - Target 9: ");
    if (res1 != NULL && res1[0] == 0 && res1[1] == 1)
    {
        printf("PASS [0, 1]\n");
    }
    else
    {
        printf("FAIL\n");
    }
    free(res1);

    // Test Case 2: Edge case (Duplicate entries)
    int nums2[] = {3, 3};
    int target2 = 6;
    int *res2 = twoSum(nums2, 2, target2, &returnSize);
    printf("Test Case 2 (Edge Case) - Target 6: ");
    if (res2 != NULL && res2[0] == 0 && res2[1] == 1)
    {
        printf("PASS [0, 1]\n");
    }
    else
    {
        printf("FAIL\n");
    }
    free(res2);

    return 0;
}
