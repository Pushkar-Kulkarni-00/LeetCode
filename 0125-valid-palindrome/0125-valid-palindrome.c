void format(char* s,char *k) {
    int c=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='A' && s[i]<='Z')k[c++]=s[i]-'A'+'a';
        else if((s[i]>='a'&&s[i]<='z')|| (s[i]>='0'&&s[i]<='9'))k[c++]=s[i];

        else continue;
    }
    k[c]='\0';
}

char st[200000];
int t;

void push(char x){
    st[++t]=x;
}

char pop(){
    return st[t--];
}

bool isPalindrome(char* s) {
    t=-1;
    int l=strlen(s);
    char k[l+1];
    format(s,k);
    l=strlen(k);
    if(l==0)return true;
    int i;
    for(i=0;i<l/2;i++)push(k[i]);
    if(l%2!=0)i++;
    for(;i<l;i++)if(pop()!=k[i])return false;
    return true;
}