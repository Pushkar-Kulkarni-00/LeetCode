int cmp(const void*a ,const void*b){
    return *(int *)b-*(int *)a;
}

int minimumCost(int* cost, int costSize) {
    qsort(cost,costSize,sizeof(int),cmp);
    int s=0;
    int k=0;
    for(int i=0;i<costSize;i++){
        if(k==0||k==1)s+=cost[i];
        k=(k+1)%3;
    }
    return s;
}