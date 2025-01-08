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
ʾ��
���룺nums = [0,0,1,1,1,2,2,3,3,4]
�����5, nums = [0,1,2,3,4]
���ͣ�����Ӧ�÷����µĳ��� 5,����ԭ���� nums ��ǰ���Ԫ�ر��޸�Ϊ 0, 1, 2, 3, 4 ������Ҫ���������г����³��Ⱥ����Ԫ�ء�
*/