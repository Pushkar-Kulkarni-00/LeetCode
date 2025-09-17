/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int haszero(int n){
    while(n>0){
        if(n%10==0) return 1;
        n/=10;
    }
    return 0;
}

int* getNoZeroIntegers(int n, int* returnSize) {
    int *k=(int *)calloc(sizeof(int),2);
    for(int i=1;i<n;i++){
        if(!(haszero(i))&&!(haszero(n-i))){
            k[0]=i;
            k[1]=n-i;
            *returnSize=2;
            return k;
        }
    }
    *returnSize=0;
    return k;
}