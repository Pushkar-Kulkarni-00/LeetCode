int removeDuplicates(int* nums, int numsSize) {
    int *num=(int *)malloc((numsSize)*sizeof(int));
    int c=0;
    bool check[201]={false};
    for(int i=0;i<numsSize;i++){
        if(!check[nums[i]+100]){
            check[nums[i]+100]=true;
            num[c++]=nums[i];
            }
    }
    for(int i=0;i<c;i++){
        nums[i]=num[i];
    }
    return c;
}