/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findThePrefixCommonArray(int* A, int ASize, int* B, int BSize, int* returnSize) {
    *returnSize=ASize;
    int n=ASize;
    int fa[n+1];
    int fb[n+1];
    for(int i=0;i<n+1;i++)fa[i]=0;
    for(int i=0;i<n+1;i++)fb[i]=0;
    int *ans=(int *)malloc(sizeof(int)*(n+1));
    fa[A[0]]=1;
    fb[B[0]]=1;
    ans[n]=n;
    ans[0]=A[0]==B[0]?1:0;
    for(int i=1;i<n;i++){
        fa[A[i]]=1;
        fb[B[i]]=1;
        int c=0;
        for(int j=i;j>=0;j--){
            if(fa[B[j]]==1)c++;
        }
        ans[i]=c;
    }
    return ans;
}