/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int cmp(const void *a,const void *b){
    int x = *(const int *)a;
    int y = *(const int *)b;
    return (y>x)-(y<x);
}

int* maxKDistinct(int* nums, int numsSize, int k, int* returnSize) {
    qsort(nums,numsSize,sizeof(int),cmp);
    int *out = malloc(sizeof(int) * (k < numsSize ? k : numsSize));
    int count = 0;

    for (int i = 0; i < numsSize && count < k; i++) {
        if (i == 0 || nums[i] != nums[i - 1]) {
            out[count++] = nums[i];
        }
    }

    *returnSize = count;
    return out;
}