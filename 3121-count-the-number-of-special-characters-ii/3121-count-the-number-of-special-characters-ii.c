int numberOfSpecialChars(char* word) {
    int lower =0;int upper=0;int invalid=0;
    for(int i=0;word[i];i++){
        char c=word[i];
        if(c>='a'&& c<='z'){
            int bit= 1<<(c-'a');
            lower=lower | bit;
            if(upper & bit){
                invalid = invalid | bit;
            }
        }
        else{
            upper= upper | 1<<(c-'A');
        }
    }
    return __builtin_popcount((lower & upper) & ~invalid);
}