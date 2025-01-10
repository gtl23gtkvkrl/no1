#include "stdio.h"

void rotate(int* nums, int numsSize, int k) {
    int newArr[numsSize];
    for (int i = 0; i < numsSize; ++i) {
        newArr[(i + k) % numsSize] = nums[i];
    }
    for (int i = 0; i < numsSize; ++i) {
        nums[i] = newArr[i];
    }
    
}
/*for (初始化; 条件; 自增) {
    // 循环体
}自增需要循环体结束后才能执行
*/