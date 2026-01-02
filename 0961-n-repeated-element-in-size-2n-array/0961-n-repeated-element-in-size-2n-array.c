int repeatedNTimes(int* nums, int numsSize) {
    int x[10001]={0};
    int max=0;
    for(int i=0;i<numsSize;i++){x[nums[i]]++;if(nums[i]>max)max=nums[i];}
    for(int i=0;i<max+1;i++)if(x[i]==numsSize/2)return i;
    return 0;
}