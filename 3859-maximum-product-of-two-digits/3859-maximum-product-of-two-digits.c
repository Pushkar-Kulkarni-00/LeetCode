int maxProduct(int n) {
    int c=0,k=n;
    while(k>0){k/=10;c++;}
    int arr[c];
    k=n;c=0;
    int max=0;
    while(k>0){arr[c++]=k%10;k/=10;}
    for(int i=0;i<c;i++){
        for(int j=0;j<c;j++){
            if(arr[i]*arr[j]>max && j!=i)max=arr[i]*arr[j];
        }
    }
    return max;
}