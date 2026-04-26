double findMaxAverage(int* nums, int numsSize, int k) {
    double add=0;
    for(int i=0;i<k;i++){
        add+=nums[i];
    }
    double madd=add;
    for(int i=k;i<numsSize;i++){
        add=add-nums[i-k]+nums[i];
        if(add>madd)madd=add;
    }
    return madd/k;
}