// k to the power n
powerRecursive(int k, int n){
  if(n == 0) return 1;
  int p = power(k , n /2); // 2 ^ 4 = 2^2 * 2^2
  int p *= p;
  if(n & 1) return p * k; // if odd the multiply with k again
  return p;
}

// find the pattern
powerIterative(int k, int n){
  int res = 1;
  while(n){
    if(n & 1) res *= k;
    k *= k;
    n >>= 1;
  }
  return res;
}
