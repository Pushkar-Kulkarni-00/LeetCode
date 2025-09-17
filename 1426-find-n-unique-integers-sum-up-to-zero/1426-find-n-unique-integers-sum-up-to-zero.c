/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sumZero(int n, int* returnSize) {
    int *k=(int *)calloc(n,sizeof(int));
    int c=0;
    for(int i=1;i<=n/2;i++){
        k[c++]=i;
        k[c++]=-i;
    }
    if(n%2!=0)k[c]=0;
    *returnSize=n;
    return k;
}