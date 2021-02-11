// Given two numbers A and B, find Kth digit from right of AB

class Solution{
public:
    unsigned long long int power(int a, int b){
        if(b == 0) return 1;
        unsigned long long int temp = power(a, b/2);
        temp = temp * temp;
        if(b & 1) return temp * a;
        else return temp;
    }
    int kthDigit(int A,int B,int K){
        int digit;
        unsigned long long int p = power(A,B);
        while(K--){
            digit = p % 10;
            p /= 10;
        }
        return digit;
    }
};
