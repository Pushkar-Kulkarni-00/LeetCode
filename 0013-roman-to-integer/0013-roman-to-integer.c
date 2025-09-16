int romanToInt(char* s) {
    int c=0;
    char ch;
    for(int i=0;s[i]!='\0';i++){
        ch=s[i];
        if(ch=='I')c+=1;
        else if(ch=='V'){
            c+=5;
            if(i!=0)if(s[i-1]=='I')c-=2;
        }
        else if(ch=='X'){
            c+=10;
            if(i!=0) if(s[i-1]=='I')c-=2;
        }
        else if(ch=='L'){
            c+=50;
            if(i!=0)if(s[i-1]=='X')c-=20;
        }
        else if(ch=='C'){
            c+=100;
            if(i!=0)if(s[i-1]=='X')c-=20;
        }
        else if(ch=='D'){
            c+=500;
            if(i!=0)if(s[i-1]=='C')c-=200;
        }
        else if(ch=='M'){
            c+=1000;
            if(i!=0)if(s[i-1]=='C')c-=200;
        }
    }
    return c;
}