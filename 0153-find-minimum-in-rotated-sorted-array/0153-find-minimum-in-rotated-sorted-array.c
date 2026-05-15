int findMin(int* nums, int numsSize) {
    int last=nums[numsSize-1];
    int l=0;
    int r=numsSize-1;
    while(l<r){
        int m=(l+r)/2;
        if(nums[m]>last)l=m+1;
        else r=m;
    }
    return nums[l];
}