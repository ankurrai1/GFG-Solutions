// Binary Search is a searching algorithm for searching an element in a sorted list or array.
// Binary Search is efficient than Linear Search algorithm and performs the search operation
// in logarithmic time complexity for sorted arrays or lists.



#include<bits/stdc++.h>
using namespace std;

//Binary search using recursion
int binarySearch(int arr[], int ele, int end, int start = 0){
    if(end <= 0) return -1;
    int mid = (start + end) / 2;
    if(arr[mid] == ele) return mid;
    else if(mid - 1 >= 0 && arr[mid] > ele) return binarySearch(arr, ele, mid-1, start);
    else if(mid + 1 < end && arr[mid] < ele) return binarySearch(arr, ele, end, mid+1);
    return -1;
}

// binary Search using while loop
int binarySearchLoop(int arr[], int ele, int n){
    int start = 0, end= n -1, mid;
    while(start <= end){
        mid = (start + end) / 2;
        if(arr[mid] == ele) return mid;
        else if(mid - 1 > 0 && arr[mid] > ele) end = mid - 1;
        else if(mid + 1 < n && arr[mid] < ele) start = mid + 1;
    }
    return -1;
}

int main(){
  int n = 6, arr[]= {10, 12, 13, 15, 22, 27};
  int elementToSearch = 22;
  cout << binarySearchLoop(arr, elementToSearch, n) << endl;
  cout << binarySearch(arr, elementToSearch, n) << endl;
  return 0;
}

// UPGRADED VERSION

int binarySearch(int arr[], int ele, int end, int start = 0){
    if(start <= end){
        int mid = (start + end) / 2;
        if(arr[mid] == ele) return mid;
        if( arr[mid] > ele) return binarySearch(arr, ele, mid-1, start);
        else return binarySearch(arr, ele, end, mid+1);
    }
    return -1;
}

// binary Search using while loop
int binarySearchLoop(int arr[], int ele, int n){
    int start = 0, end= n -1, mid;
    while(start <= end){
        mid = (start + end) / 2;
        if(arr[mid] == ele) return mid;
        if( arr[mid] > ele) end = mid - 1;
        else start = mid + 1;
    }
    return -1;
}

int main(){
  int n = 6, arr[]= {10, 12, 13, 15, 22, 27};
  int elementToSearch = 22;
  cout << binarySearchLoop(arr, elementToSearch, n) << endl;
  cout << binarySearch(arr, elementToSearch, n-1) << endl;
  return 0;
}
