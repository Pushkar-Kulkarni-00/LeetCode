/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findThePrefixCommonArray(int* A, int ASize, int* B, int BSize, int* returnSize) {
    *returnSize=ASize;
    int n=ASize;
    int fa[n+1];
    int fb[n+1];
    for(int i=0;i<n+1;i++)fa[i]=fb[i]=0;
    int *ans=(int *)malloc(sizeof(int)*(n+1));
    int c=0;
    for(int i=0;i<n;i++){
        fa[A[i]]=1;
        fb[B[i]]=1;
        if(fb[A[i]]==1)c++;
        if(fa[B[i]]==1)c++;
        if(A[i]==B[i])c--;
        ans[i]=c;
    }
    return ans;
}