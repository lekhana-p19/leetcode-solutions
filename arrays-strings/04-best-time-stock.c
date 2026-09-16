#include <stdio.h>

// Core LeetCode Logic
int maxProfit(int *prices, int pricesSize)
{
    if (pricesSize <= 1)
        return 0;

    int min_price = prices[0];
    int max_profit = 0;

    for (int i = 1; i < pricesSize; i++)
    {
        if (prices[i] < min_price)
        {
            min_price = prices[i];
        }
        else
        {
            int profit = prices[i] - min_price;
            if (profit > max_profit)
            {
                max_profit = profit;
            }
        }
    }
    return max_profit;
}

// Local testing block for VS Code (Part C)
int main()
{
    // Test Case 1: Standard profitable trends
    int prices1[] = {7, 1, 5, 3, 6, 4};
    printf("Test 1 Max Profit: %d (Expected: 5)\n", maxProfit(prices1, 6));

    // Test Case 2: Edge Case (Downward trend, no profit possible)
    int prices2[] = {7, 6, 4, 3, 1};
    printf("Test 2 Max Profit: %d (Expected: 0)\n", maxProfit(prices2, 5));

    return 0;
}
