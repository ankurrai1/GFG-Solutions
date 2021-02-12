// Given a number N, the task is to find the largest prime factor of that number.

// Idea : The factors from 2 to sqrt(n) have multiples from sqrt(n)+1 to n.

class Solution{
public:
    long long int largestPrimeFactor(int n){
        long long int maxPrime = -1;
        if(n == 0 || n == 1) return -1; // no value could be given
        for(int i = 2; i * i <= n; i++){
            if( n % i == 0){
                maxPrime = i;
                while( n % i == 0 & n > i) n /= i;
            }
        }
        if(n > 1) maxPrime=n;
        return maxPrime;

    }

    // less code version
    long long int largestPrimeFactor(int N)
    {
        long long num = 2;
        // loop till sqrt(N)
        while ((num * num) <=N)
        if (N % num == 0) // if num divides N evenly
            N /= num; // divide N by num
        else
            num++; // increase num if it don't divide N
        return N;
    }
};
