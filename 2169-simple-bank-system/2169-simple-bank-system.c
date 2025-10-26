


typedef struct {
    long long bal;
} Bank;

Bank *b;
int t=0;

Bank* bankCreate(long long* balance, int balanceSize) {
    b=(Bank *)malloc(balanceSize*sizeof(Bank));
    t=balanceSize;
    for(int i=0;i<balanceSize;i++){
        b[i].bal=balance[i];
    }
    return b;
}

bool bankTransfer(Bank* obj, int account1, int account2, long long money) {
    if (account1 < 1 || account1 > t || account2 < 1 || account2 > t)
    return false;
    if(obj[account1-1].bal>=money){
        obj[account1-1].bal-=money;
        obj[account2-1].bal+=money;
        return true;
    }
    return false;
}

bool bankDeposit(Bank* obj, int account, long long money) {
    if(account<1||account >t)return false;
    obj[account-1].bal+=money;
    return true;
}

bool bankWithdraw(Bank* obj, int account, long long money) {
    if(account<1||account >t)return false;
    if(obj[account-1].bal>=money){
        obj[account-1].bal-=money;
        return true;
    }
    return false;
}

void bankFree(Bank* obj) {
        free(obj);
}

/**
 * Your Bank struct will be instantiated and called as such:
 * Bank* obj = bankCreate(balance, balanceSize);
 * bool param_1 = bankTransfer(obj, account1, account2, money);
 
 * bool param_2 = bankDeposit(obj, account, money);
 
 * bool param_3 = bankWithdraw(obj, account, money);
 
 * bankFree(obj);
*/