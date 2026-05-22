int search(int* nums, int numsSize, int target) {
    int l=0;int r=numsSize-1;
    while(l<r){
        int m=(l+r)/2;
        if(nums[m]>nums[r])l=m+1;
        else r=m;
    }
    int k=l;
    l=0;
    r=numsSize-1;
    while(l<=r){
        int m=(l+r)/2;
        int a=(m+k)%numsSize;
        if(nums[a]==target)return a;
        if(nums[a]<target)l=m+1;
        else r=m-1;
    }
    return -1;
}