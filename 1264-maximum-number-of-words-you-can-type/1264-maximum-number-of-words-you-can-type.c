bool isvalid(char *w,char *bl){
    for(int i=0;bl[i]!='\0';i++){
        for(int j=0;w[j]!='\0';j++){
            if(w[j]==bl[i]) return false;
        }
    }
    return true;
}

int canBeTypedWords(char* text, char* brokenLetters) {
    int prev=0;
    int c=0;
    char word[1000];
    for(int i=0;text[i]!='\0';i++){
        if(text[i]==' '){
            strncpy(word,text+prev,i-prev);
            word[i-prev]='\0';
            if(isvalid(word,brokenLetters))c++;
            prev=i+1;
        }
    }
    if (prev < strlen(text)) {
        int len = strlen(text) - prev;
        strncpy(word, text + prev, len);
        word[len] = '\0';
        if(isvalid(word,brokenLetters))c++;
    }
    return c;
}