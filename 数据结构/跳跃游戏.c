#include "stdbool.h"

bool canJump(int* nums, int numsSize) {
    int max_reach = 0;  // 当前能够到达的最远位置

    for (int i = 0; i < numsSize; ++i) {
        // 如果当前位置已经超过了 max_reach，说明无法到达当前位置
        if (i > max_reach) {
            return false;
        }
        // 更新 max_reach
        max_reach = fmax(max_reach, i + nums[i]);
        // 如果 max_reach 已经能够到达最后一个下标，返回 true
        if (max_reach = numsSize - 1) {
            return true;
        }
    }

    return false;
}