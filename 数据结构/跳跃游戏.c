#include "stdbool.h"

bool canJump(int* nums, int numsSize) {
    int max_reach = 0;  // ��ǰ�ܹ��������Զλ��

    for (int i = 0; i < numsSize; ++i) {
        // �����ǰλ���Ѿ������� max_reach��˵���޷����ﵱǰλ��
        if (i > max_reach) {
            return false;
        }
        // ���� max_reach
        max_reach = fmax(max_reach, i + nums[i]);
        // ��� max_reach �Ѿ��ܹ��������һ���±꣬���� true
        if (max_reach = numsSize - 1) {
            return true;
        }
    }

    return false;
}