/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* maxScoreIndices(int* nums, int numsSize, int* returnSize) {
    int cum0[numsSize + 1];
    int cum1[numsSize + 1];

    cum0[0] = 0;
    for (int i = 0; i < numsSize; i++) {
        cum0[i + 1] = cum0[i] + (nums[i] == 0);
    }

    cum1[numsSize] = 0;
    for (int i = numsSize - 1; i >= 0; i--) {
        cum1[i] = cum1[i + 1] + (nums[i] == 1);
    }

    int maxScore = 0;

    for (int i = 0; i <= numsSize; i++) {
        int score = cum0[i] + cum1[i];
        if (score > maxScore)
            maxScore = score;
    }

    int *ans = malloc(sizeof(int) * (numsSize + 1));
    int count = 0;

    for (int i = 0; i <= numsSize; i++) {
        if (cum0[i] + cum1[i] == maxScore)
            ans[count++] = i;
    }

    *returnSize = count;
    return ans;
}