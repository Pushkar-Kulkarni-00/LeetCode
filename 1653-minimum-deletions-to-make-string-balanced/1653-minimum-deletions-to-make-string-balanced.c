int minimumDeletions(char* s) {
    int b=0;
    int deletions=0;
    for(int i=0;s[i]!='\0';i++){
        char c=s[i];
        if(c=='b')b++;
        else{
            if(deletions+1<b)deletions++;
            else deletions=b;
        }
    }
    return deletions;
}