// Given a number N. Find the length of the longest consecutive 1s in its binary representation.

int maxConsecutiveOnes(int n)
{
    int count = 0;
    int shifted = n>>1;
    while(n & shifted){
        count++;
        n = shifted & n;
        shifted = n >> 1;
    }
    return count + 1;
}
