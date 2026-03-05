int minOperations(char* s) {
    int len=strlen(s);
    char t[len];
    t[0]=s[0];
    for(int i=1;i<len;i++){
        if(t[i-1]=='0')t[i]='1';
        else t[i]='0';
    }

    int ans1=0;
    int ans2=0;
    for(int i=0;i<len;i++){
        if(s[i]!=t[i])ans1++;
        else ans2++;
    }
    int ans=ans1<ans2?ans1:ans2;
    return ans;
}