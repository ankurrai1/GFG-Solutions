
 // Logic:
 // a number which is a power of two will have only one set bit in its binary representation

 bool isPowOf2(int n){
   if(n == 0) return faslse;
   return (n & (n-1) == 0) // will unset first bit of n;
 }


 bool isPowOf2(int n){
   return (n != 0) && (n & (n-1) == 0)
 }


// an Solution for very big no like 10^18 upto;

bool isPowerofTwo(long long n){

    double res = log2(n);
    return (res - int(res)  ==  0);

    // return (n & (n - 1) == 0);
}
