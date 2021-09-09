#include<bits/stdc++.h>
using namespace std;

//Ternery search using recursion
int ternarySearch(int arr[], int ele, int end, int start = 0){
    if(start <= end){
        int mid1 = start + ((end - start) / 3);
        int mid2 = end - ((end - start) / 3);
        
        if(arr[mid1] == ele) return mid1;
        if(arr[mid2] == ele) return mid2;
        
        if( arr[mid1] > ele) return ternarySearch(arr, ele, mid1 - 1, start);
        if(arr[mid2] < ele) return ternarySearch(arr, ele, end, mid2+1);
        else return ternarySearch(arr, ele, mid1+1, mid2 - 1);
    }
    return -1;
}

// ternary Search using while loop
int ternarySearchLoop(int arr[], int ele, int n){
    
    int start = 0, end= n -1, mid1,mid2;
    
    while(start <= end){
        
        mid1 = start + ((end - start) / 3);
        mid2 = end - ((end - start) / 3);
        
        if(arr[mid1] == ele) return mid1;
        if(arr[mid2] == ele) return mid2;
        
        if( arr[mid1] > ele) end = mid1 - 1;
        if(arr[mid2] < ele) start = mid2 + 1;
        else {
            start = mid1 + 1;
            end = mid2 - 1;
        }
    }
    return -1;
}

int main(){
  int n = 6, arr[]= {10, 12, 13, 15, 22, 27};
  int elementToSearch = 27;
  cout << ternarySearchLoop(arr, elementToSearch, n) << endl;
  cout << ternarySearch(arr, elementToSearch, n-1) << endl;
  return 0;
}
