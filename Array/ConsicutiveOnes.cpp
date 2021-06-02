#include<bits/stdc++.h>

using namespace std;

int consicutiveOnes(int arr[], int n){
  int h = 0, hsoFar = 0;
  for(int i = 0; i < n; i++){
      if(arr[i] == 1) hsoFar++;
      else {
          h = max(h, hsoFar);
          hsoFar = 0;
      }
  }
  return max(h, hsoFar);
}

int main(){

  int arr[] = {0, 1, 1, 0, 1};
  int n = 5;
  int max_profit1 = consicutiveOnes(arr, n);
  cout << max_profit1 << endl;

  int arr2[] =  {1, 0, 1, 1, 1, 1, 1, 0, 1, 1};
  int n2 = 10;
  int max_profit2 = consicutiveOnes(arr2, n2);
  cout << max_profit2 << endl;

  return 0;
}
