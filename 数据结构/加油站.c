#include "stdio.h"


int canCompleteCircuit(int* gas, int gasSize, int* cost, int costSize) {
    int start = 0;
    int sumyou = 0;
    int sumlicheng = 0;
    int dangqian = 0;
    for(int i = 0 ;i<gasSize;i++)
    {
        sumyou += gas[i];
        sumlicheng += cost[i];
    }
    //�ж��������Ȳ������������
    if(sumyou<sumlicheng)
    {
        return -1;
    }
    //�����������ۼ�Ŀǰ����
    for(int i = 0;i<gasSize;i++)
    {
        dangqian += gas[i]-cost[i];
        if(dangqian < 0)
        {
            start = i+1;
            dangqian = 0;
        }
    }
    return start;
}

int main() {
    int gas[] = {1, 2, 3, 4, 5};
    int cost[] = {3, 4, 5, 1, 2};
    int gasSize = sizeof(gas) / sizeof(gas[0]);
    int costSize = sizeof(cost) / sizeof(cost[0]);

    int result = canCompleteCircuit(gas, gasSize, cost, costSize);
    printf("Start station: %d\n", result);

    return 0;
}