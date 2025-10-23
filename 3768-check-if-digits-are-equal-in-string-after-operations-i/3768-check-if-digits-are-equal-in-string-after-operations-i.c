bool hasSameDigits(char* s) {
    int l=strlen(s);
    for(int i=1;i<=l-2;i++){
        int n=strlen(s);
        int j;
        for(j=0;j<n-1;j++){
            s[j]=((s[j]-'0')+(s[j+1]-'0'))%10 + '0';
        }
        s[j]='\0';
    }
    return s[0]==s[1];
}