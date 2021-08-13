#include<bits/stdc++.h>
using namespace std;

//function will return first index of element if found otherwise it will return -1
int linearSearch(int arr[], int n, int element){
    for(int i=0; i< n; i++){
        if(arr[i] == element) return i;
    }
    return -1;
}

int main(){
  int n = 6, arr[]= {10, 20, 33, 15, 22, 27};
  int elementToSearch = 22;
  cout << linearSearch(arr, n ,elementToSearch) << endl;
  return 0;
}
