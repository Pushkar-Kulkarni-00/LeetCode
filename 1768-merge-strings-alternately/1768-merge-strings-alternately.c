char * mergeAlternately(char * word1, char * word2){
    int a=strlen(word1);
    int b=strlen(word2);
    int p=a+b;
    char *ans=(char *)malloc(sizeof(char)*(p+1));
    int i=0;
    int j=0;
    int k=0;
    while(i<a && j<b){
        ans[k++]=word1[i++];
        ans[k++]=word2[j++];
    }
    if(i==a)for(int r=j;r<b;r++)ans[k++]=word2[r];
    else for(int r=i;r<a;r++)ans[k++]=word1[r];
    ans[k]='\0';
    return ans;
}