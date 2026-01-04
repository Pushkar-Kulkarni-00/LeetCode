int sumFourDivisors(int* nums, int numsSize) {
    int s=0;
    for(int i=0;i<numsSize;i++){
        int d=0;
        int dsum=0;
        for(int j=1;j*j<=nums[i];j++){
            if(nums[i]%j==0){
                d++;
                dsum+=j;
                if(nums[i]/j!=j){
                    d++;
                    dsum+=nums[i]/j;
                }
            }
        }
        if(d==4)s+=dsum;
    }
    return s;
}