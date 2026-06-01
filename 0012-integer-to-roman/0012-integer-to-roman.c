char* intToRoman(int num) {
    char *ans = malloc(20);

    char *thousands[] = {"", "M", "MM", "MMM"};
    char *hundreds[]  = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    char *tens[]      = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    char *ones[]      = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

    sprintf(ans, "%s%s%s%s",
            thousands[num / 1000],
            hundreds[(num % 1000) / 100],
            tens[(num % 100) / 10],
            ones[num % 10]);

    return ans;
}