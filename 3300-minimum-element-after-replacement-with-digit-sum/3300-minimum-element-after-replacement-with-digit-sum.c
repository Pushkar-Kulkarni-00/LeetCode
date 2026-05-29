int minElement(int* nums, int numsSize) {
    int min=INT_MAX;
    for(int i=0;i<numsSize;i++){
        int n=nums[i];
        int s=0;
        while(n>0){
            s+=n%10;
            n/=10;
        }
        if(s==0)return 0;
        if(s<min)min=s;
    }
    return min;
}