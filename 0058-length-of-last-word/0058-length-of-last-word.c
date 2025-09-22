int lengthOfLastWord(char* s) {
    int k=strlen(s);
    char *w =(char *)malloc(k+1);
    char *pw =(char *)malloc(k+1);
    int c=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==' '){
            w[c]='\0';
            if(w[0]!='\0')strcpy(pw,w);
            c=0;
        }
        else{
            w[c++]=s[i];
        }
    }
    
    if(c==0)strcpy(w,pw);
    else w[c]='\0';
    return strlen(w);
}