char* intToRoman(int num) {
    char *ans=(char *)malloc(sizeof(char)*100000);
    int c=0;
    while(num>0){
        if(num>=1000){
            ans[c++]='M';
            num-=1000;
        }
        else{
            if(num>=900){
                num-=900;
                ans[c++]='C';
                ans[c++]='M';
            }
            else if(num>=500){
                ans[c++]='D';
                num-=500;
            }
            else{
                if(num>=400){
                    num-=400;
                    ans[c++]='C';
                    ans[c++]='D';
                }
                else if(num>=100){
                    ans[c++]='C';
                    num-=100;
                }
                else{
                    if(num>=90){
                        num-=90;
                        ans[c++]='X';
                        ans[c++]='C';    
                    }
                    else if(num>=50){
                        num-=50;
                        ans[c++]='L';
                    }
                    else{
                        if(num>=40){
                            num-=40;
                            ans[c++]='X';
                            ans[c++]='L';
                        }
                        else if (num>=10){
                            num-=10;
                            ans[c++]='X';
                        }
                        else{
                            if(num>=9){
                                num-=9;
                                ans[c++]='I';
                                ans[c++]='X';
                            }
                            else if(num>=5){
                                num-=5;
                                ans[c++]='V';
                            }
                            else{
                                if(num>=4){
                                    num-=4;
                                    ans[c++]='I';
                                    ans[c++]='V';
                                }
                                else {
                                    num-=1;
                                    ans[c++]='I';
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    ans[c]='\0';
    return ans;
}