int findLengthOfLCIS(int* nums, int numsSize) {
    int max=0;
    int cnt=0;
    for(int i=1;i<numsSize;i++){
        if(nums[i-1]<nums[i])cnt++;
        else{
            if(cnt+1>max)max=cnt+1;
            cnt=0;
        }
    }
    if(cnt+1>max)max=cnt+1;
    return max;
}