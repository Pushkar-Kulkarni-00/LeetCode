bool check(int* nums, int numsSize) {
    int f=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]>nums[(i+1)%numsSize] && (f++)==1)return false;
    }
    return true;
}