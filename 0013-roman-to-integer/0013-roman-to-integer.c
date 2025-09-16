int getval(char c){
    switch(c){
        case 'I':return 1;
        case 'V':return 5;
        case 'X':return 10;
        case 'L':return 50;
        case 'C':return 100;
        case 'D':return 500;
        case 'M':return 1000;
    }
    return 0;
}

int romanToInt(char* s) {
    int c=0;
    char ch;
    for(int i=0;s[i]!='\0';i++){
        ch=s[i];
        c+=getval(ch);
        if(ch=='V'){
            if(i!=0)if(s[i-1]=='I')c-=2;
        }
        else if(ch=='X'){
            if(i!=0) if(s[i-1]=='I')c-=2;
        }
        else if(ch=='L'){
            if(i!=0)if(s[i-1]=='X')c-=20;
        }
        else if(ch=='C'){
            if(i!=0)if(s[i-1]=='X')c-=20;
        }
        else if(ch=='D'){
            if(i!=0)if(s[i-1]=='C')c-=200;
        }
        else if(ch=='M'){
            if(i!=0)if(s[i-1]=='C')c-=200;
        }
    }
    return c;
}