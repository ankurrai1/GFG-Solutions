#include<bits/stdc++.h>

using namespace std;

void print(int arr[], int n ){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
// your task is to find sum of element so frequently so that make quary in constant time.

void setPrefixSum(int arr[], int n){
    for(int i = 1; i < n; i++) arr[i] += arr [i-1];
}

int getSum(int arr[], int n, int l, int r){
    if(l < 0 || r >= n) return NULL;
    if(l == 0) return arr[r];
    return arr[r] - arr[l - 1];
}

int main(){

   int arr[] = {1,2,3,4,5,6,7,8,9};
   int n = 9;
   setPrefixSum(arr, n);

   print(arr, n);

   // constant time getSum in given range
   cout << getSum(arr, n, 1, 4) << endl;
   cout << getSum(arr, n, 0 , 9) << endl;
   cout << getSum(arr, n, 4, 4) << endl;
   cout << getSum (arr, n, 0,  5) << endl;

}
