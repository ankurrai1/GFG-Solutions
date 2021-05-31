#include<bits/stdc++.h>

using namespace std;

void print(int arr[], int n){
  for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
}

int equiIndex(int arr[], int n){
    for(int i = 1; i < n; i++){
        arr[i] = arr[i] + arr[i-1];
    }
    for(int i = 0; i < n; i++){
        if(arr[n-1] - arr[i] == arr[i-1]) return i;
    }
    return -1;
}

int main(){
  int arr[] = {-7, 1, 5, 2, -4, 3, 0};
  int n = 7;
  int sum = equiIndex(arr, n);
  cout << sum << endl;

  int arr2[] =  {1, 2, 3, 4, 1, 2, 3};
  int n2 = 7;
  int sum2 = equiIndex(arr2, n2);
  cout << sum2 << endl;

  return 0;
}
