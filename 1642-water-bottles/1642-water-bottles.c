int numWaterBottles(int numBottles, int numExchange) {
    int t=numBottles;
    int r=numBottles;
    while(r>=numExchange){
        int nb=r/numExchange;
        t+=nb;
        r=nb+(r%numExchange);
    }
    return t;
}