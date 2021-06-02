#include<bits/stdc++.h>

using namespace std;

int minimumSubArraySum(int arr[], int n){
    int mn = arr[0], mnSf = arr[0];
    for(int i = 0; i < n; i++){
        mnSf = min(arr[i], mnSf + arr[i]);
        mn = min(mn, mnSf);
    }
    return min(mn, mnSf);
}

int maximumCircularSubArraySum(int arr[], int n){
    int totalSum = 0;
    for(int i = 0; i < n; i++) totalSum += arr[i];
    int minSum = minimumSubArraySum(arr, n);
    return totalSum - minSum;
}

int main(){
  int arr[] = {3, -4, 5, 6, -8, 7};
  int n = 6;
  int res1 = maximumCircularSubArraySum(arr, n);
  cout << res1 << endl;

  int arr2[] =  {5, -2, 3, 4};
  int n2 = 4;
  int res2 = maximumCircularSubArraySum(arr2, n2);
  cout << res2 <<endl;

  int arr3[] =  {8, -4, 3, -5, 4};
  int n3 = 5;
  int res3 = maximumCircularSubArraySum(arr3, n3);
  cout << res3 <<endl;

  return 0;
}
