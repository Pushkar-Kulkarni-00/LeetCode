int isvowel(char n){
    if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u'||n=='A'||n=='E'||n=='I'||n=='O'||n=='U')return 1;
    return 0;
}

char* sortVowels(char* s) {
    int len=strlen(s);
    int cs[255]={0};
    for(int i=0;s[i]!='\0';i++){
        if(isvowel(s[i]))cs[s[i]]++;
    }
    char order[10]="AEIOUaeiou";
    for(int i=0;s[i]!='\0';i++){
        if(isvowel(s[i])){
            for(int j=0;j<10;j++){
                if(cs[order[j]]>0){
                    s[i]=order[j];
                    cs[order[j]]--;
                    break;
                }
            }
        }
    }
    return s;

}