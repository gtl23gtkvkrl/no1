/*#include "stdio.h"

int majorityElement(int* nums, int numsSize) {
    int houxuan = nums[0];
    int count = 1;
    for(int i = 1; i<numsSize ; i++)
    {
        if(count == 0)
        {
            houxuan = nums[i];
            count = 1;
        }
        else if (nums[i] == houxuan)
        {
            count++;
        }
        else{
            count--;
        }

    }
    return houxuan;
}*/
#include <stdio.h>
#include <stdint.h>

// 哈希表的大小（假设为 1000）
#define HASH_TABLE_SIZE 1000

// 哈希函数
uint32_t hash(int key) {
    // 选择一个质数作为乘数（通常选择一个较大的质数）
    const uint32_t multiplier = 2654435761; // 2^32 * (sqrt(5) - 1) / 2

    // 将键乘以乘数，然后取结果的中间部分作为哈希值
    uint32_t hash_value = (uint32_t)key * multiplier;

    // 取模运算，将哈希值映射到哈希表的大小范围内
    return hash_value % HASH_TABLE_SIZE;
}

int main() {
    int keys[] = {42, 123, 99, 7, 256, 1024, 555};
    int num_keys = sizeof(keys) / sizeof(keys[0]);

    for (int i = 0; i < num_keys; i++) {
        printf("Key: %d -> Hash: %u\n", keys[i], hash(keys[i]));
    }

    return 0;
}