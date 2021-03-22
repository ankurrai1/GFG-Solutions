#include<bits/stdc++.h>
using namespace std;

int targetSubsetSum(int arr[], int n,int sum){
    if(n == 0){
      if(sum == 0) return 1;
      return 0;  
    }
    return targetSubsetSum(arr, n - 1, sum) + targetSubsetSum(arr, n -1, sum-arr[n-1]);
}

int main(){
  int n = 3, arr[]= {10, 20, 15}, sum = 25;
  cout << targetSubsetSum(arr, n , sum) << endl;
  return 0;
}
