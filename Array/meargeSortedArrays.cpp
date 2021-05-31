#include<bits/stdc++.h>

using namespace std;

void print(int arr[], int n){
  for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
}

void mergeTwoSorted(int arr1[], int n1, int arr2[], int n2, int res[]){
    int p1 = 0; int p2 = 0, rp = 0;
    while(p1 != n1 && p2 != n2 ){
        if(arr1[p1] <= arr2[p2]) res[rp++] = arr1[p1++];
        if(arr2[p2] < arr1[p1]) res[rp++] = arr2[p2++];
    }
    while(p1 != n1) res[rp++] = arr1[p1++];
    while(p2 != n2) res[rp++] = arr2[p2++];
}

int main(){
  int arr[] = {-7, -4, -3, -2, -1, 0, 0};
  int arr2[] =  {1, 2, 3, 4, 5, 6, 7};
  int res[14];

  int n = 7, n2 = 7;
  mergeTwoSorted(arr, n, arr2, n2, res);
  print(res, n + n2);

  return 0;
}
