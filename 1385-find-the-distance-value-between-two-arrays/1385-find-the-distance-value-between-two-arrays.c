int findTheDistanceValue(int* arr1, int arr1Size, int* arr2, int arr2Size, int d) {
    int cnt=0;
    for(int i=0;i<arr1Size;i++){
        int chk=0;
        for(int j=0;j<arr2Size;j++){
            int k=arr1[i]-arr2[j];
            if(k<0)k*=-1;
            if(k<=d){
                chk=1;
                break;
            }
        }
        if(chk==0)cnt++;
    }
    return cnt;
}