int singleNumber(int* nums, int numsSize) {
    int ans[60001]={0};
    for(int i=0;i<numsSize;i++)ans[nums[i]+30000]++;
    for(int i=0;i<60001;i++)if(ans[i]==1)return i-30000;
    return -1;
}