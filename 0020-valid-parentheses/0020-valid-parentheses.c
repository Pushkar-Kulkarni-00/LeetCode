bool isValid(char* s) {
    char st[10000];
    int top=-1;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='[')st[++top]=s[i];
        else{
            if(top==-1)return false;
            if(st[top]=='('&&s[i]==')')top--;
            else if(st[top]=='{'&&s[i]=='}')top--;
            else if(st[top]=='['&&s[i]==']')top--;
            else return false;
        }
    }
    if(top==-1)return true;
    return false;
}