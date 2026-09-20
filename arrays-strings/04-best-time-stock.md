## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** [My Accepted Solution – Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/2147623984/)

# Intuition

We need to find the maximum profit by buying the stock at a low price and selling it at a higher price later.

# Approach

First, store the lowest price seen so far in `minPrice`.

Then go through the array one by one. If a lower price is found, update `minPrice`.

For every price, calculate the profit by subtracting `minPrice` from the current price.

If the calculated profit is greater than `maxProfit`, update `maxProfit`.

Finally, return `maxProfit`.

# Complexity

- Time complexity: $O(n)$ because the array is traversed only once.
- Space complexity: $O(1)$ because only a few variables are used.

# Notes

For the input `[7,1,5,3,6,4]`, the minimum price is `1` and the best selling price is `6`.

Maximum profit = `6 - 1 = 5`.

# Code

```c
int maxProfit(int* prices, int pricesSize) {
    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }

        int profit = prices[i] - minPrice;

        if (profit > maxProfit) {
            maxProfit = profit;
        }
    }

    return maxProfit;
}