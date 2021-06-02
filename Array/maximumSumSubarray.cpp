#include<bits/stdc++.h>

using namespace std;

int maximumSubArraySum(int arr[], int n){
    int sum = arr[0], sumSoFar = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > (arr[i] + sumSoFar)) sumSoFar = arr[i];
        else sumSoFar += arr[i];
        if(sumSoFar > sum) sum = sumSoFar;
    }
    return sumSoFar > sum ? sumSoFar : sum;
}

int main(){
  int arr[] = {2,3,-8,7,-1,2,3};
  int n = 7;
  int res1 =maximumSubArraySum(arr, n);
  cout << res1 << endl;

  int arr2[] =  {-6, -1, -8};
  int n2 = 3;
  int res2 = maximumSubArraySum(arr2, n2);
  cout << res2 <<endl;

  return 0;
}
