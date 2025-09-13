bool isvowel(char ch){
    switch(ch){
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':return true;
        default:return false;
    }
}

bool iscons(char ch){
    if(isvowel(ch))return false;
    return true;
}

int maxadd(int *k){
    int vmax=0,cmax=0;
    for(int i=0;i<256;i++) {
        if(isvowel((char)i)){if(k[i]>=vmax)vmax=k[i];}
        else{ if(k[i]>cmax)cmax=k[i];}
        }
    return cmax+vmax;
}

int maxFreqSum(char* s) {
    int count[256]={0};
    for(int i=0;s[i]!='\0';i++)count[s[i]]++;
    return maxadd(count);
}