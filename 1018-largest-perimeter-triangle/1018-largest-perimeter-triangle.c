bool istriangle(int a,int b,int c){
    if(a+b>c && b+c>a && c+a>b)return true;
    return false;
}
int cmp(const void *a,const void *b){
    return *(int *)b-*(int *)a;
}

int largestPerimeter(int* nums, int numsSize) {
    int max=0;
    qsort(nums,numsSize,sizeof(int),cmp);
    for(int i=0;i<numsSize-2;i++){
        int r=nums[i]+nums[i+1]+nums[i+2];
        if(istriangle(nums[i],nums[i+1],nums[i+2])){
            max=r>max?r:max;
        }
    }
    return max;
}