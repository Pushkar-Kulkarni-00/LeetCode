char * cpm(char *a,char * b){
    char *ans=(char *)malloc((strlen(a)>strlen(b))?strlen(a):strlen(b)+1);
    int c=0;
    for(int i=0;a[i]!='\0'&&b[i]!='\0';i++){
        if(a[i]==b[i])ans[c++]=a[i];
        else break;
    }
    ans[c]='\0';
    return ans;
}

char* longestCommonPrefix(char** strs, int strsSize) {
    char *ans=strs[0];
    for(int i=0;i<strsSize-1;i++){
        ans=cpm(ans,strs[i+1]);
    }
    return ans;
}