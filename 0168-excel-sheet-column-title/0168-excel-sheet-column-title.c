char* convertToTitle(int columnNumber) {
    char* ans=(char *)malloc(sizeof(char)*8);
    int t=0;
    while(columnNumber>0){
        columnNumber--;
        ans[t++]=(columnNumber%26)+'A';
        columnNumber/=26;
    }
    ans[t]='\0';
    int st=0;
    int en=t-1;
    while(st<en){
        char temp=ans[st];
        ans[st]=ans[en];
        ans[en]=temp;
        st++;
        en--;
    }
    return ans;
}