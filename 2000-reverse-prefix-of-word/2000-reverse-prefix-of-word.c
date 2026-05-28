char* reversePrefix(char* word, char ch) {
    int x=-1;
    for(int i=0;word[i]!='\0';i++)if(word[i]==ch){x=i;break;}
    if(x==-1)return word;
    int l=0;
    while(l<x){
        char t=word[l];
        word[l]=word[x];
        word[x]=t;
        l++;
        x--;
    }
    return word;
}