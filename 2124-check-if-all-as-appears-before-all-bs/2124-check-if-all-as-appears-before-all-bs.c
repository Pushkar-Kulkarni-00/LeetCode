bool checkString(char* s) {
    char mode= 'a';
    int sw=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]!=mode && sw==1)return false;
        if(s[i]!=mode){mode=s[i];sw=1;}
    }
    return true;
}