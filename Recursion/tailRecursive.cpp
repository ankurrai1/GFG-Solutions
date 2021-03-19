// in modern compilers tail recursive fucntions are optemized.
// tail recursive fucntions are those fucntions which has only recursive call at
// But not all recursive fucntions could be changed to tail recursive

// factorial of no without tail recursive

int factorial(int n){
  if(n == 0 || n == 1) return 1;
  return factorial(n -1) * n; // although recursion is in endl but it is not tail recursive due to * n;
}

// tail recursive form of above

int factorial(int n, int k){
  if(n == 0 || n == 1) return k;
  return factorial(n -1, n * k); // only fucntiion call is at this level;
}
