#include<bits/stdc++.h>
using namespace std;

// the logic is like i will check myself and the following function will give if find other wise -1
// my faith is this functioin will return whether it found in from i + 1 to n  my task is to check for i only
int firstIndexOfOccurrence1(int arr[], int ele, int i, int n){
  if(i >= n) return -1;
  int upto = firstIndexOfOccurrence1(arr, ele, i+1, n);
  if(arr[i] == ele) return i;
  return upto;
}
// above is bad solution for first index  // but this is good for last index as following

int lastIndexOfOccurrence(int arr[], int ele, int i, int n){
  if(i >= n) return -1;
  int upto = lastIndexOfOccurrence(arr, ele, i+1, n);
  if(arr[i] == ele && upto == -1 ) return i;
  return upto;
}

// check as you go; in best case you you will find at first place
int firstIndexOfOccurrence(int arr[], int ele, int i, int n){
  if(i >= n) return -1;
  if(arr[i] == ele) return i;
  return firstIndexOfOccurrence(arr, ele, i+1, n);
}

int main(){
  int n = 8, arr[]= {10, 20, 33, 15, 22, 27, 20, 57};
  cout << firstIndexOfOccurrence1(arr, 20 ,0 , n) << endl;
  cout << lastIndexOfOccurrence(arr, 20 ,0 , n) << endl;
  cout << firstIndexOfOccurrence(arr, 20 ,0 , n) << endl;

  return 0;
}
