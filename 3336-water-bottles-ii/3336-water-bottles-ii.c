int maxBottlesDrunk(int numBottles, int numExchange) {
    int t=numBottles;
    int r=numBottles;
    while(r>=numExchange){
        int nb=1;
        t+=nb;
        r=nb+r-numExchange++;
    }
    return t;
}