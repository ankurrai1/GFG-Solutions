// find position of first set bit in the given number

// version 1
unsigned int getFirstSetBit(int n){
    if(n == 0) return 0;
    int res = n & ~(n - 1);
    int count = 0;
    while(res >>= 1){
        count++;
    }
    return count + 1;
}

// version 2

unsigned int getFirstSetBit(int n){
    return log2(n & (-n)) + 1;
}
