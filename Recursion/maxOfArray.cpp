#include<bits/stdc++.h>
using namespace std;

int arrayMax(int arr[], int n, int i){
  if(i == n-1 ) return arr[i];
  return max(arrayMax(arr, n, i + 1), arr[i]);
}

int main(){
  int n = 6, arr[]= {10, 20, 33, 15, 22, 27};
  cout << arrayMax(arr, n , 0) << endl;
  return 0;
}
