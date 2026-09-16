#include <stdio.h>

int main()
{
    int num1, num2, sum;

    // 1. Take the first number from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    // 2. Take the second number from the user
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // 3. Add them together
    sum = num1 + num2;

    // 4. Print the final answer
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}
