#include<bits/stdc++.h>

using namespace std;

void print(int arr[], int n){
  for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}

void moveZeroToEnd(int arr[], int n){

    int s = 0, f = 0;
    while(f < n){
        if(arr[f] != 0){
            swap(arr[f++], arr[s++]);
        }
        else f++;
    }
}

int main(){
  int arr[] = {0,0,2,3,0,4,0};
  int n = 7;
  moveZeroToEnd(arr, n);
  print(arr, n);

  int arr2[] =  {1, 0, 0, 0, 4, 0, 4};
  int n2 = 7;
  moveZeroToEnd(arr2, n2);
  print(arr2,n2);

  return 0;
}
