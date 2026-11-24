#include <stdlib.h>

int* runningSum(int* nums, int numsSize, int* returnSize) {
    int* ans = malloc(numsSize * sizeof(int));

    int sum = 0;

    *returnSize = numsSize;

    for (int i = 0; i < numsSize; i++) {
        sum = sum + nums[i];
        ans[i] = sum;
    }

    return ans;
}
