bool isPalindrome(long x) {
    if (x < 0) return false;
    if (x / 10 == 0) return true; 
    
    long original = x;
    long y = 0;
    while (x > 0) {
        y = y * 10 + (x % 10);
        x /= 10;
    }
    return (y == original);    
}