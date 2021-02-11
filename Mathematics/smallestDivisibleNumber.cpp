// Given a number N, find an integer denoting the smallest number evenly divisible by each number from 1 to n.

class Solution{
public:
long long gcd(long long a, long long b){
    if(b == 0 ) return a;
    return gcd(b, a % b);
}
bool isPrime(int num){
    if(num % 2 == 0 || num % 3==0) return false;
    for(int i = 5; i * i <= num; i += 6){
        if(num % i == 0 || num % (i+2) == 0 ) return false;
    }
    return true;
}
    long long getSmallestDivNum(long long n){
        long long res = 1;
        if (n >= 2) res*=2;
        if(n >= 3) res*=3;
        for(int i = 4; i <= n; i++){
            if(isPrime(i)) res *= i;
            else{
                res = (res * i)/gcd(res, i);
            }
        }
        return res;
    }
};
