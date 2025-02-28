#include "stdio.h"

int jump(int* nums, int numsSize) {
    int minsteps = 0;  // 最小跳跃次数
    int max_reach = 0;  // 当前跳跃范围内能够到达的最远位置
    int end = 0;  // 当前跳跃范围的结束位置
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