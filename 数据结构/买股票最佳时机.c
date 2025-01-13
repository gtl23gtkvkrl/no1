#include "stdio.h"
int maxProfit(int* prices, int pricesSize) {
    if (pricesSize == 0) {
        return 0;
    }

    int minPrice = prices[0];  // 初始化最低价格为第一天的价格
    int maxProfit = 0;         // 初始化最大利润为0

    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < minPrice) {
            // 如果当前价格比最低价格还低，更新最低价格
            minPrice = prices[i];
        } else if (prices[i] - minPrice > maxProfit) {
            // 如果当前价格减去最低价格大于当前的最大利润，更新最大利润
            maxProfit = prices[i] - minPrice;
        }
    }

    return maxProfit;
}
/*int maxProfit(int* prices, int pricesSize) {
    int temp = 1;
    for(int i = 0;i<pricesSize;i++)
    {
        if(prices[i]<prices[i+1] || temp >= prices[i])
        {
            temp = prices[i];
        }
    }
    
}*/