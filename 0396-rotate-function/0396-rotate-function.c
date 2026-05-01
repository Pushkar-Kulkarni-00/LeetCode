int maxRotateFunction(int* nums, int numsSize) {
    int mf=INT_MIN;
    int f=0;
    int s=0;
    for(int i=0;i<numsSize;i++){f+=i*nums[i];s+=nums[i];}
    for(int i=0;i<numsSize;i++){
        int lf=f+s-numsSize*nums[numsSize-i-1];
        f=lf;
        if(lf>mf)mf=lf;
    }
    return mf;
}