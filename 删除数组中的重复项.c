#include "stdio.h"

int removeDuplicates(int* nums, int numsSize) {
    if(numsSize == 0)
    {
        return 0;
    }

    int i = 1,j = 1;
    while(i<numsSize)
    {
        if(nums[i]!=nums[i-1])
        {
            nums[j] = nums[i];
            ++j;
        }
        ++i;
    }
    return j;
}
/*
示例
输入：nums = [0,0,1,1,1,2,2,3,3,4]
输出：5, nums = [0,1,2,3,4]
解释：函数应该返回新的长度 5,并且原数组 nums 的前五个元素被修改为 0, 1, 2, 3, 4 。不需要考虑数组中超出新长度后面的元素。
*/