int numberOfSpecialChars(char* word) {
    int chk[26]={0};
    int chek[26]={0};
    for(int i=0;word[i]!='\0';i++){
        char s=word[i];
        if(s>='a' && s<='z')chk[s-'a']++;
        if(s>='A' && s<='Z')chek[s-'A']++;
    }
    int cnt=0;
    for(int i=0;i<26;i++){
        if(chk[i]>0 && chek[i]>0)cnt++;
    }
    return cnt;
}