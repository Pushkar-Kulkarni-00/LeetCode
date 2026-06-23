int cmp(const void *a,const void *b){
    return *(int *)a-*(int *)b;
}
int maxIceCream(int* costs, int costsSize, int coins) {
    qsort(costs,costsSize,sizeof(int),cmp);
    int t=0;
    int s=0;
    while(coins>0 && t<costsSize){
        if(costs[t]>coins)break;
        s++;
        coins-=costs[t++];
    }
    return s;
}