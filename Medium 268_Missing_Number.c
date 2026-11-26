int missingNumber(int* nums, int numsSize) {
    int sum = 0;

    for (int i = 0; i < numsSize; i++) {
        sum += nums[i];
    }

    int n = numsSize;
    int expectedSum = n * (n + 1) / 2;

    return expectedSum - sum;
}
