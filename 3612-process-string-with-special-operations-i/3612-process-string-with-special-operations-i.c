char * reversestr(char *s){
    int len=strlen(s);
    int l=0;
    int r=len-1;
    while(l<r){
        char t=s[l];
        s[l]=s[r];
        s[r]=t;
        l++;
        r--;
    }
    return s;
}



char* processStr(char* s) {
    char *ans = (char*)malloc(sizeof(char)*600000);
    int t = 0;
    ans[0] = '\0';

    for(int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];

        if(ch == '*') {
            if(t > 0) {
                t--;
                ans[t] = '\0';
            }
        }
        else if(ch == '%') {
            reversestr(ans);
        }
        else if(ch == '#') {
            int k = t;
            for(int j = 0; j < k; j++) {
                ans[t++] = ans[j];
            }
            ans[t] = '\0';
        }
        else {
            ans[t++] = ch;
            ans[t] = '\0';
        }
    }

    return ans;
}