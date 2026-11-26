#include <stdlib.h>

int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    int* ans = malloc(numsSize * sizeof(int));

    *returnSize = numsSize;

    for (int i = 0; i < numsSize; i++) {
        int count = 0;

        for (int j = 0; j < numsSize - 1; j++) {
            if (nums[j] > nums[i]) {
                count++;
            }
        }

        ans[i] = count;
    }

    return ans;
}
    
