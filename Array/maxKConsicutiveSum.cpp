#include<bits/stdc++.h>

using namespace std;

//find the maximum sum of k consicutive elements in array


// Use of Sliding Window technique

int maxKCosicutiveSum(int arr[], int n, int k){
   int sum = 0;

   // setting window size.
   for(int i = 0; i < k; i++){
      sum += arr[i];
   }

    int max_sum = sum;

   // sliding window
   for(int i = k, j = 0; i < n; i++,j++){
       sum += arr[i];
       sum -= arr[j];
       max_sum = max(max_sum, sum);
   }

   return max_sum;

}

int main(){

  int arr[] = {1, 8, 30, -5, 20, 7};
  int n = 6;
  cout << maxKCosicutiveSum(arr, n, 3) << endl;

  int arr2[] =  {5, -10, 6, 90, 3};
  int n2 = 5;
  cout << maxKCosicutiveSum(arr2, n2, 2) << endl;


  return 0;
}
