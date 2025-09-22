int numUniqueEmails(char** emails, int emailsSize) {
    char **email=(char **)malloc(emailsSize*sizeof(char*));
    char e[100];
    int r=0;
    for(int i=0;i<emailsSize;i++){
        int c=0;int mode=0;
        for(int j=0;emails[i][j]!='\0';j++){
            if(emails[i][j]=='+' && mode ==0)mode=1;
            else if(emails[i][j]=='@')mode=2;
            if(mode ==0){
                if(emails[i][j]=='.')continue;
                e[c++]=emails[i][j];
            }
            else if(mode==1){
                continue;
            }
            else if(mode ==2){
                e[c++]=emails[i][j];
            }
        }
        e[c]='\0';
        int nt = 0;
        for (int k = 0; k < r; k++) {                     
            if (email[k] && strcmp(e, email[k]) == 0) {    
                nt = 1;
                break;
            }
        }
        if (nt == 0) {
            email[r] = malloc(strlen(e) + 1);           
            strcpy(email[r], e);
            r++;
        }
    }

    return r;
}