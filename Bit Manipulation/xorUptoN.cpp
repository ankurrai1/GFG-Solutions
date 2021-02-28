// Find the remainder of N by moduling it with 4.
// If rem = 0, then xor will be same as N.
// If rem = 1, then xor will be 1.
// If rem = 2, then xor will be N+1.
// If rem = 3 ,then xor will be 0.

int xorUptoN(int n){
  int remd = n % 4;
  if(remd == 0) return n;
  if(remd == 1) return 1;
  if(remd == 2) return n+1;
  if(remd == 3) return 0;
}
