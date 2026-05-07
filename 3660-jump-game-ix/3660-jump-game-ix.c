/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int max(int a,int b){
    return a>b?a:b;
}
int min(int a,int b){
    return a<b?a:b;
}

int* maxValue(int* nums, int numsSize, int* returnSize) {
    int pre[numsSize];
    pre[0]=nums[0];
    for(int i=1;i<numsSize;i++){
        pre[i]=max(pre[i-1],nums[i]);
    }
    int suff[numsSize];
    suff[numsSize-1]=nums[numsSize-1];
    for(int i=numsSize-2;i>=0;i--){
        suff[i]=min(suff[i+1],nums[i]);
    }
    int * ans=(int *)malloc(sizeof(int)*numsSize);

    ans[numsSize-1]=pre[numsSize-1];
    for(int i=numsSize-2;i>=0;i--){
        if(pre[i]>suff[i+1])ans[i]=ans[i+1];
        else ans[i]=pre[i];
    }
    *returnSize=numsSize;
    return ans;
}