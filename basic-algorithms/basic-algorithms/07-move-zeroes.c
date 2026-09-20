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
    int nums[] = {0, 1, 0, 3, 12};
    int size = 5;

    moveZeroes(nums, size);

    printf("Array after moving zeroes: ");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", nums[i]);
    }

    return 0;
}