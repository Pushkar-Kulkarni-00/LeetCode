bool checkOnesSegment(char* s) {
    int chk=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='0' && chk==0)continue;
        if(s[i]=='1' && chk==0){chk=1;continue;}
        if(s[i]=='0' && chk==1){chk=2;continue;}
        if(s[i]=='1' && chk==2)return false;
    }
    return true;
}