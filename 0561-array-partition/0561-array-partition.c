int cmp(const void *a,const void *b){
    return *(int *)a-*(int *)b;
}

int arrayPairSum(int* nums, int numsSize) {
    int s=0;
    int k=0;
    qsort(nums,numsSize,sizeof(int),cmp);
    for(int i=0;i<numsSize;i++){
        if(k==0)s+=nums[i];
        k=(k+1)%2;
        printf("%d\n",s);
    }
    return s;
}