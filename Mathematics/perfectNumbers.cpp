// Given a number N, check if a number is perfect or not. A number is said to be perfect
// if sum of all its factors excluding the number itself is equal to the number.
class Solution {
  public:
    int isPerfectNumber(long long N) {
        if(N == 1) return 0;
        long long sum = 1;
        for(int i = 2; i <= N; i++){
            if(N % i == 0){
                sum += i;
                sum +=  (N / i);
            }
        }
        return (sum == N);
    }
};
