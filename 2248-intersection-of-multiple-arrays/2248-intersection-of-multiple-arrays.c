/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int** nums, int numsSize, int* numsColSize, int* returnSize) {
    int x[1001]={0};
    for(int i=0;i<numsSize;i++){
        for(int j=0;j<numsColSize[i];j++){
            x[nums[i][j]]++;
        }
    }  
    int *out=(int *)malloc(sizeof(int)*1000); 
    int c=0;
    for(int i=0;i<1001;i++){
        if(x[i]==numsSize)out[c++]=i;
    }
    *returnSize=c;
    return out;
}