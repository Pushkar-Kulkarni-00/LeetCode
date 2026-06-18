double angleClock(int hour, int minutes) {
    double h = (hour % 12) * 30 + minutes * 0.5;
    double m = minutes * 6;
    
    double diff = fabs(h - m);
    return fmin(diff, 360 - diff);
}