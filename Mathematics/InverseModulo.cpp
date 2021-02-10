// Given two integers ‘a’ and ‘m’. The task is to find modular multiplicative inverse of ‘a’ under modulo ‘m’.

// 1) Brut Force Approach
// if Found then return modulo inverse;
// else return -1;
// time complexity will be O(m)

int modInverse(int a, int m)
{
   for(int i = 1; i < m; i++){
       if((a * i) % m == 1) return i; // formula = N * X === 1 (% m)
   }
   return -1;
}

// time complexity will be O(log m)
// Fermat's little theorem


// If we know m is prime, then we can also use Fermats’s little theorem to find the inverse.
// a^m-1 ≡ 1 (mod m)
// If we multiply both sides with a-1, we get
// a^m-2 ≡ a^-1 (mod m)
// a and m must be co-prime

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b , a % b);

}

int power(int a, int b, int m){
  if(b == 0) return 1;
  int temp = power(a, b/2, m) % m;
  temp = (temp % m) * (temp % m);
  if( b & 1) return (temp * a) % m;
  else return temp;
}

int modInverse(int a, int m)
{
  if(gcd(a,m) != 1){
     cout << "ERROR : NOT POSSIBLE TO FIND" << endl;
     return;
  }
  return power(a, m - 2, m);

}
