
int reverseBits(int n) {
    int arr[32] = {0};
    int j = 31;
    while(n>0){
        int d = n%2;
        arr[j] = d;
        n /= 2;
        j--;
    }
    int num = 0;
    for(int i = 0;i<32;i++){
        num += arr[i]*pow(2,i);
    }
    return num;
}
