long long waysToBuyPensPencils(int total, int cost1, int cost2) {
    long long k=0;
    if(total<cost1 && total<cost2)return 1;
    for(int i=0;i<=total/cost1;i++){
        int nt=total-i*cost1;
        k=k+1+nt/cost2;
    }
    return k;
}