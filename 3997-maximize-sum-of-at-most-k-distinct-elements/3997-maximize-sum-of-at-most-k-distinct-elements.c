/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int * sort(int *k,int c){
    int r=0;
    for(int i=0;i<c-1;i++){
        for(int j=i+1;j<c;j++){
            if(k[j]>k[i])k[i]=k[i]+k[j]-(k[j]=k[i]);
        }
    }
    return k;
}
int* rd(int *k,int c,int *l){
    for(int i=0;i<c;i++){
        for(int j=0;j<c;j++){
            if(k[i]==k[j]&&i!=j)k[j]=0;
        }
    }
    int *ans=(int *)malloc(sizeof(int)*c);
    int r=0;
    for(int i=0;i<c;i++){
        if(k[i])ans[r++]=k[i];
    }
    *l=r;
    return ans;
}

int* maxKDistinct(int* nums, int numsSize, int k, int* returnSize) {
    nums=sort(nums,numsSize);
    int r=0;
    nums=rd(nums,numsSize,&r);
    *returnSize=k>r?r:k;
    return nums;
}