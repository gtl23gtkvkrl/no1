#include <stdio.h>
#include <stdlib.h>


int candy(int* ratings, int ratingsSize) {
    if (ratingsSize == 0) return 0;

    int* candies = (int*)malloc(ratingsSize * sizeof(int));
    for (int i = 0; i < ratingsSize; i++) {
        candies[i] = 1; // 每个孩子至少分配到 1 个糖果
    }

    // 从左到右遍历，确保每个孩子如果评分比左边的孩子高，那么他的糖果数也要比左边的孩子多
    for (int i = 1; i < ratingsSize; i++) {
        if (ratings[i] > ratings[i - 1]) {
            candies[i] = candies[i - 1] + 1;
        }
    }

    // 从右到左遍历，确保每个孩子如果评分比右边的孩子高，那么他的糖果数也要比右边的孩子多
    for (int i = ratingsSize - 2; i >= 0; i--) {
        if (ratings[i] > ratings[i + 1]) {
            candies[i] = (candies[i] > candies[i + 1] + 1) ? candies[i] : candies[i + 1] + 1;
        }
    }

    // 计算总糖果数
    int totalCandies = 0;
    for (int i = 0; i < ratingsSize; i++) {
        totalCandies += candies[i];
    }

    free(candies);
    return totalCandies;
}