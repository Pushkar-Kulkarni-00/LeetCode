/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int in(int i,int *k,int c){
    for(int j=0;j<c;j++){
        if(k[j]==i)return 0;
    }
    return 1;
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *k=malloc(10000*sizeof(int));
    int c=0;
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if (nums[i]+nums[j]==target){
                if(in(i,k,c))k[c++]=i;
                if(in(j,k,c))k[c++]=j;
            }
        }
    }
    k=realloc(k,c*sizeof(int));
    *returnSize=c;
    return k;
}