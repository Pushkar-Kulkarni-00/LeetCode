int cmp(const void *a,const void* b){
    return *(int*)b-*(int*)a;
}

int minimumBoxes(int* apple, int appleSize, int* capacity, int capacitySize) {
    int a=0,c=0;
    for(int i=0;i<appleSize;i++)a+=apple[i];
    for(int i=0;i<capacitySize;i++)c+=capacity[i];
    if(a==c)return capacitySize;
    c=0;
    int k=0;
    qsort(capacity,capacitySize,sizeof(int),cmp);
    for(int i=0;i<capacitySize;i++){
        k++;
        c+=capacity[i];
        if(c>=a)return k;
    }
    return 0;
}