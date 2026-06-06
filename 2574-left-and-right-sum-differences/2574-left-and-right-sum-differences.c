int* leftRightDifference(int* nums, int numsSize, int* returnSize) {
    int total = 0;

    for(int i = 0; i < numsSize; i++)
        total += nums[i];

    int *ans = malloc(numsSize * sizeof(int));
    int left = 0;

    for(int i = 0; i < numsSize; i++) {
        int right = total - left - nums[i];
        ans[i] = abs(left - right);
        left += nums[i];
    }

    *returnSize = numsSize;
    return ans;
}