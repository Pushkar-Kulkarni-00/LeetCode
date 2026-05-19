int lenLongestFibSubseq(int* arr, int arrSize) {
    int max=2;
    int lc=2;
    for(int i=0;i<arrSize-1;i++){
        for(int j=i+1;j<arrSize;j++){
            int a=arr[i];
            int b=arr[j];
            int idx=j;
            while(1){
                int key=a+b;
                int l=idx+1;
                int r=arrSize-1;

                int f=-1;
                while(l<=r){
                    int m=(l+r)/2;
                    if(arr[m]<key)l=m+1;
                    else if (arr[m]==key){
                        f=m;
                        break;
                    }
                    else r=m-1;
                }
                if(f!=-1){
                    lc++;
                    a=b;
                    b=key;
                    idx=f;
                }
                else break;
            }
            if(lc>max)max=lc;
            lc=2;
        }
    }
    return max > 2 ? max : 0;
}