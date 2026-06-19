int largestAltitude(int* gain, int gainSize) {
    int max=0;
    int s=0;
    for(int i=0;i<gainSize;i++){
        s+=gain[i];
        if(s>max)max=s;
    }
    return max;
}