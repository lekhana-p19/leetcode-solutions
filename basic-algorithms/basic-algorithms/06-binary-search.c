#include <stdio.h>

int search(int* nums, int numsSize, int target)
{
    int left = 0;
    int right = numsSize - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (nums[mid] == target)
            return mid;

        if (nums[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

int main()
{
    int nums[] = {-1, 0, 3, 5, 9, 12};

    int result1 = search(nums, 6, 9);
    printf("Test 1: Index = %d (Expected: 4)\n", result1);

    int result2 = search(nums, 6, 2);
    printf("Test 2: Index = %d (Expected: -1)\n", result2);

    return 0;
}