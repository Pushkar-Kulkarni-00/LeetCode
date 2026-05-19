int longestSubarray(int* nums, int numsSize) {
    int max=2;
    int lm=2;
    for(int i=2;i<numsSize;i++){
        if(nums[i]==(nums[i-1]+nums[i-2]))lm++;
        else{
            if(lm>max)max=lm;
            lm=2;
        }
    }
    return lm>max?lm:max;
}