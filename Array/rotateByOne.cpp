#include<bits/stdc++.h>

using namespace std;

void print(int arr[], int n){
  for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}

void leftRotateByOne(int arr[], int n){
    int first = arr[0];
    for(int i = 0; i < n-1; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = first;
}

int main(){
  int arr[] = {0,0,2,3,0,4,0};
  int n = 7;
  leftRotateByOne(arr, n);
  print(arr, n);

  int arr2[] =  {1, 2, 3, 4, 5, 6, 7};
  int n2 = 7;
  leftRotateByOne(arr2, n2);
  print(arr2,n2);

  return 0;
}
