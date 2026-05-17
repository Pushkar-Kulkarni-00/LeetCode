char* reverseStr(char* s, int k) {
    int len=strlen(s);
    for(int i=0;i<len;i+=2*k){
        int l=i;
        int r=i+k-1;
        if(r>=len)r=len-1;
        while(l<r){
            char t=s[l];
            s[l]=s[r];
            s[r]=t;
            l++;
            r--;
        }
    }
    return s;
}