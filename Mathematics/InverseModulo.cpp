// Given two integers ‘a’ and ‘m’. The task is to find modular multiplicative inverse of ‘a’ under modulo ‘m’.

// 1) Brut Force Approach
// if Found then return modulo inverse;
// else return -1;

int modInverse(int a, int m)
{
   for(int i = 1; i < m; i++){
       if((a * i) % m == 1) return i; // formula = N * X === 1 (% m)
   }
   return -1;
}
