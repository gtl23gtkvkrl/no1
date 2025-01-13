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

// ��ϣ��Ĵ�С������Ϊ 1000��
#define HASH_TABLE_SIZE 1000

// ��ϣ����
uint32_t hash(int key) {
    // ѡ��һ��������Ϊ������ͨ��ѡ��һ���ϴ��������
    const uint32_t multiplier = 2654435761; // 2^32 * (sqrt(5) - 1) / 2

    // �������Գ�����Ȼ��ȡ������м䲿����Ϊ��ϣֵ
    uint32_t hash_value = (uint32_t)key * multiplier;

    // ȡģ���㣬����ϣֵӳ�䵽��ϣ��Ĵ�С��Χ��
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