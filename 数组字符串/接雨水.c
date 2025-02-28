#include "stdio.h"
#include "string.h"

int trap(int* height, int heightSize) {
    int n = heightSize;//������Ĵ�Сȡ����
    int maxleft[n];int maxright[n];

    memset(maxleft,0,sizeof(maxleft));//��������0����Ϊmemset�ܿ�
    
    maxleft[0] = height[0];
    for(int i = 1;i<heightSize;i++)
    {
        maxleft[i] = fmax(maxleft[i-1],height[i]);
    }


    memset(maxright,0,sizeof(maxright));
    maxright[n-1] = height[n-1];
    for(int i = n-2;i>=0;i--)
    {
        maxright[i] = fmax(maxright[i+1],height[i]);
    }
    int ans;
    for(int i = 0;i<n;i++)
    {
        ans += fmin(maxleft[i],maxright[i]) - height[i];
    }
    return ans;
}