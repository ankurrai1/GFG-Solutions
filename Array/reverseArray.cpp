#include<bits/stdc++.h>

using namespace std;

void print(int arr[], int n){
  for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
}

void reverse(int arr[], int n){
  for(int i = 0; i < n/2; i++){
    int temp = arr[i];
    arr[i] = arr[n - i - 1];
    arr[n - i - 1] = temp;
  }
}

int main(){
  int arr[] = {0,1,2,3,4,5,6,7};
  int n = 8;
  reverse(arr, n);
  print(arr, n);

  return 0;
}
