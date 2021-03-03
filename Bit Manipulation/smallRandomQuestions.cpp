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

 // Function to find the first position with different bits

 int posOfRightMostDiffBit(int m, int n)
{
    int count = 0;
    while(m || n){
        if(((m&1) ^ (n&1))) return count + 1;
        count++;
        m >>=1;
        n >>=1;
    }
    return -1;
}

int greyConverter(int n)
{
    int a = n >> 1;
    return (n ^ a);
}

// find first and only set bit position starting 1
int findPosition(int N) {
        if(N & (N -1) || N <= 0) return -1;
        return (int)log2(N) +1;
    }
