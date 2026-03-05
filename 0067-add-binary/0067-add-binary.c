char* addBinary(char* a, char* b) {
    int i = strlen(a) - 1;
    int j = strlen(b) - 1;
    int carry = 0;
    char* res = (char*)malloc(10005);
    int k = 0;
    while (i >= 0 || j >= 0 || carry) {
        int total = carry;

        if (i >= 0) 
            total += a[i--] - '0';
        if (j >= 0) 
            total += b[j--] - '0';
        res[k++] = (total % 2) + '0';
        carry = total / 2;
    }

    res[k] = '\0';
    for (int l = 0, r = k - 1; l < r; l++, r--) {
        char tmp = res[l];
        res[l] = res[r];
        res[r] = tmp;
    }

    return res;
}