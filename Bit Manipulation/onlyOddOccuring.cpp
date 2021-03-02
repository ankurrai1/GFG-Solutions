// find the no which is not in pair
int getOddOccuring(int arr[], int n){
  int res = 0;
  for(int i = 0; i < n; i++){
    res ^= arr[i];
  }
  return res;
}

// variation of this problem is like  following
// find no missing in the array 1 to n+1;

int missingNo(int arr[], int n){
  int t = n;
  int nox = 0, axor = 0;
  while(t--) nox ^= t;
  for(int i = 0; i < n ; i++) axor ^= arr[i];
  return nox^axor;
}
