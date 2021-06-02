#include<bits/stdc++.h>

using namespace std;

int consicutiveOddEven(int arr[], int n){
    int mx = 0, mxSf = 1;
    for(int i = 1; i < n; i++){
        if((arr[i] & 1) ^ (arr[i-1] & 1) == 1) mxSf++;
        else{
            mx = max(mx, mxSf);
            mxSf = 1;
        }
    }
    return max(mx, mxSf);
}

int main(){
  int arr[] = {10, 12, 14, 7, 8};
  int n = 5;
  int res1 =consicutiveOddEven(arr, n);
  cout << res1 << endl;

  int arr2[] =  {7, 10, 13, 14};
  int n2 = 4;
  int res2 = consicutiveOddEven(arr2, n2);
  cout << res2 <<endl;

  int arr3[] =  {10, 12, 8, 4};
  int n3 = 4;
  int res3 = consicutiveOddEven(arr3, n3);
  cout << res3 <<endl;

  return 0;
}
