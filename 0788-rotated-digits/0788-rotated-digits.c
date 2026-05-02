int rotatedDigits(int n) {
    int cnt = 0;

    for (int i = 1; i <= n; i++) {
        int x = i;
        int valid = 1;
        int changed = 0;

        while (x > 0) {
            int d = x % 10;

            if (d == 3 || d == 4 || d == 7) {
                valid = 0;
                break;
            }

            if (d == 2 || d == 5 || d == 6 || d == 9) {
                changed = 1;
            }

            x /= 10;
        }

        if (valid && changed) {
            cnt++;
        }
    }

    return cnt;
}