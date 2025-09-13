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

int vowelmax(unsigned char *k){
    short max=0;
    for(short i=0;i<256;i++) if(isvowel((char)i))if(k[i]>=max)max=k[i];
    return max;
}

int consmax(unsigned char *k){
    short max=0;
    for(short i=0;i<256;i++)if(iscons((char)i)) if(k[i]>=max)max=k[i];
    return max;
}

int maxFreqSum(char* s) {
    unsigned char count[256]={0};
    for(short i=0;s[i]!='\0';i++)count[s[i]]++;
    return vowelmax(count)+consmax(count);
}