#include "stdio.h"

int jump(int* nums, int numsSize) {
    int minsteps = 0;  // ��С��Ծ����
    int max_reach = 0;  // ��ǰ��Ծ��Χ���ܹ��������Զλ��
    int end = 0;  // ��ǰ��Ծ��Χ�Ľ���λ��
    for(int i=0;i<numsSize - 1 ;i++)
    {
        max_reach = fmax(max_reach,i+nums[i]);
        if(i == end)
        {
            end = max_reach;
            ++minsteps;
            if(end >= numsSize -1)
            {
                return minsteps;
            }
        }
    }
    return minsteps;
    /*
    int minsteps = 0;
    int maxup  = nums[0];
    for(int i = 0;i<numsSize; ++i)
    {
        if(maxup<numsSize-1)
        {
            maxup = i+nums[i];
            ++minsteps;
        }
        else if (maxup>=numsSize-1)
        {
            return minsteps;
        }
    }
    return minsteps;
    */

}