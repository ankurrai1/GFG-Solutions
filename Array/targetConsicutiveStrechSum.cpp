#include<bits/stdc++.h>

using namespace std;

//Given an unsorted array with non-negative elements find the target sum without fix size;


// Use of Sliding Window technique

bool maxKCosicutiveSumStrech(int arr[], int n, int sum){
    int curr_sum = arr[0];
    for(int i = 1, j = 0; i < n; i++){
        curr_sum += arr[i];
        if(curr_sum == sum) return true;
        while(curr_sum > sum && j <= i){
            curr_sum -= arr[j++];
            if(curr_sum == sum) return true;
        }
    }
    return false;
}

int main(){

  int arr[] = {1, 4, 20, 3, 10, 5};
  int n = 6;
  cout << maxKCosicutiveSumStrech(arr, n, 33) << endl;

  int arr2[] =  {5, 10, 6, 90, 2};
  int n2 = 5;
  cout << maxKCosicutiveSumStrech(arr2, n2, 2) << endl;


  return 0;
}
