int maxNumberOfBalloons(char* text) {
    int min=0;
    int x[26]={0};
    for(int i=0;text[i]!='\0';i++)x[text[i]-'a']++;
    int a=x[0];
    int b=x[1];
    min=a<b?a:b;
    int l=x[11];
    min=min<l?min:l;
    int o=x[14];
    min=min<o?min:o;
    int n=x[13];
    min=min<n?min:n;
    while(true){
    if(o>=2*min &&l>=2*min)return min;
    else min--;
    }
    return -1;
}