int findClosest(int x, int y, int z) {
    int q=x-z,p=y-z;
    if(q<0)q*=-1;
    if(p<0)p*=-1;
    return (q<p)?1:(q==p)?0:2;
}