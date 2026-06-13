char* mapWordWeights(char** words, int wordsSize, int* weights, int weightsSize) {
    char *word=(char *)malloc(sizeof(char)*(wordsSize+1));
    int t=0;
    for(int i=0;i<wordsSize;i++){
        int s=0;
        for(int j=0;words[i][j]!='\0';j++){
            s+=weights[words[i][j]-'a'];
        }
        word[t++]=(26-s%26-1)+'a';
    }
    word[t++]='\0';
    return word;
}