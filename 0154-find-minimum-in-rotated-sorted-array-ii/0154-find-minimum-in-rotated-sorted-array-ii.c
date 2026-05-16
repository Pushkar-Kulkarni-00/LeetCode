int findMin(int* nums, int numsSize) {
    int l=0;
    int r=numsSize-1;
    while(l<r){
        int m=(l+r)/2;
        if(nums[m]<nums[r])r=m;
        else if(nums[m]>nums[r])l=m+1;
        else r--;
    }
    return nums[l];
}
