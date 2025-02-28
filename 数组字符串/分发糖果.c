#include <stdio.h>
#include <stdlib.h>


int candy(int* ratings, int ratingsSize) {
    if (ratingsSize == 0) return 0;

    int* candies = (int*)malloc(ratingsSize * sizeof(int));
    for (int i = 0; i < ratingsSize; i++) {
        candies[i] = 1; // ÿ���������ٷ��䵽 1 ���ǹ�
    }

    // �����ұ�����ȷ��ÿ������������ֱ���ߵĺ��Ӹߣ���ô�����ǹ���ҲҪ����ߵĺ��Ӷ�
    for (int i = 1; i < ratingsSize; i++) {
        if (ratings[i] > ratings[i - 1]) {
            candies[i] = candies[i - 1] + 1;
        }
    }

    // ���ҵ��������ȷ��ÿ������������ֱ��ұߵĺ��Ӹߣ���ô�����ǹ���ҲҪ���ұߵĺ��Ӷ�
    for (int i = ratingsSize - 2; i >= 0; i--) {
        if (ratings[i] > ratings[i + 1]) {
            candies[i] = (candies[i] > candies[i + 1] + 1) ? candies[i] : candies[i + 1] + 1;
        }
    }

    // �������ǹ���
    int totalCandies = 0;
    for (int i = 0; i < ratingsSize; i++) {
        totalCandies += candies[i];
    }

    free(candies);
    return totalCandies;
}