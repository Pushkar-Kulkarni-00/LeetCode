/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* separateDigits(int* nums, int numsSize, int* returnSize) {
    int *ans=(int *)malloc(sizeof(int)*100000000);
    int t=0;
    for(int i=numsSize-1;i>=0;i--){
        int x=nums[i];
        while(x>0){
            ans[t++]=x%10;
            x/=10;
        }
    }
    *returnSize=t;
    ans=(int *)realloc(ans,t*sizeof(int));
    int l=0;
    int r=t-1;
    while(l<r){
        int temp=ans[l];
        ans[l]=ans[r];
        ans[r]=temp;
        l++;
        r--;
    }
    return ans;
}