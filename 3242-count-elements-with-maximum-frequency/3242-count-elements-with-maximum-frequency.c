int maxFrequencyElements(int* nums, int numsSize) {
    int k[100]={0};
    for(int i=0;i<numsSize;i++)k[nums[i]-1]++;
    int max=k[0],n=0;
    for(int i=0;i<100;i++){
        if(k[i]>max){max=k[i];n=0;};
        if(k[i]==max)n++;
    }
    return max*n;
}