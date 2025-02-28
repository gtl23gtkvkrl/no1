#include "stdio.h"
int maxProfit(int* prices, int pricesSize) {
    if (pricesSize == 0) {
        return 0;
    }

    int minPrice = prices[0];  // ��ʼ����ͼ۸�Ϊ��һ��ļ۸�
    int maxProfit = 0;         // ��ʼ���������Ϊ0

    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < minPrice) {
            // �����ǰ�۸����ͼ۸񻹵ͣ�������ͼ۸�
            minPrice = prices[i];
        } else if (prices[i] - minPrice > maxProfit) {
            // �����ǰ�۸��ȥ��ͼ۸���ڵ�ǰ��������󣬸����������
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