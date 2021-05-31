#include<bits/stdc++.h>

using namespace std;

void print(int arr[], int n){
  for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}
void reverse(int arr[], int s, int e){
    while(s <= e) swap(arr[s++], arr[e--]);
}

void leftRotateByD(int arr[], int n, int d){
    reverse(arr, 0, d-1);
    reverse(arr, d, n-1);
    reverse(arr,0 , n-1);
}

int main(){
    int d = 3;
  int arr[] = {0,0,2,3,0,4,0};
  int n = 7;
  leftRotateByD(arr, n, d);
  print(arr, n);

  int arr2[] =  {1, 2, 3, 4, 5, 6, 7};
  int n2 = 7;
  leftRotateByD(arr2, n2, d);
  print(arr2,n2);

  return 0;
}
