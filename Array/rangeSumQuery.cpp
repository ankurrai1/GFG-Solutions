#include<bits/stdc++.h>

using namespace std;

void print(int arr[], int n){
  for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
}

// int this method the original array in modified 
int rangeSumQuery(int arr[], int n, int l, int r){
    for(int i = 1; i < n; i++){
        arr[i] = arr[i] + arr[i-1];
    }
    return arr[r] - arr[l-1];
}

int main(){
  int arr[] = {0,1,2,3,4,5,6,7};
  int n = 8, l = 3, r = 7;
  int sum = rangeSumQuery(arr, n, l , r);
  cout << sum << endl;
  return 0;
}
