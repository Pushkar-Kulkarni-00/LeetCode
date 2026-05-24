bool areNumbersAscending(char* s) {
    int prev=-1;
    bool bn=false;
    int n=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='0'&&s[i]<='9'){
            if(bn==false){
                bn=true;
                n=s[i]-'0';
            }
            else {
                n=n*10+(s[i]-'0');
            }
        }
        else{
            if(bn==true && s[i]==' '){
                printf("%d\n",n);
                bn=false;
                if(prev==-1){
                    prev=n;
                }
                else{
                    if(prev>=n)return false;
                    prev=n;
                }
            }
        }
    }
    if(bn==true){
        printf("%d\n",n);
        bn=false;
        if(prev==-1){
            prev=n;
        }
        else{
            if(prev>=n)return false;
            prev=n;
        }
    }

    return true;
}