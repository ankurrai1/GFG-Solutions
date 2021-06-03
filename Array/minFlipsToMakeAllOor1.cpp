#include<bits/stdc++.h>

using namespace std;

// Given a binary array, we need to find the minimum of number of group flips to make all array elements same.
// In a group flip, we can flip any set of consecutive 1s or 0s.

void printMinflip(int arr[], int n){
    int g1c = 0, g0c= 0;
    arr[0] == 0 ? g0c++ : g1c++;

    // finding which group to flip to make less flip transaction
    for(int i = 1; i < n; i++){
        if(arr[i] != arr[i-1]){
            arr[i] == 0 ? g0c++ : g1c++;
        }
    }
    int toRemove = g0c < g1c ? 0 : 1;

    for(int i = 1; i < n; i++){
        if(arr[i] != toRemove&& arr[i-1] == toRemove){
            cout << " to Index : "  << (i - 1) << endl;
        }
        if(arr[i] == toRemove && arr[i -1] != toRemove){
            cout << "Start Fliping From Index :"  << i ;
        }
    }

}

int main(){

  cout << "Solution 1" << endl;
  int arr[] = {1, 0, 0, 0, 1, 0, 0, 1, 1, 1, 1};
  int n = 11;
  printMinflip(arr, n);

  cout << "Solution 2" << endl;
  int arr2[] =  {1, 1, 1, 1, 1};
  int n2 = 5;
  printMinflip(arr2, n2); // will not print any thi

  cout << "Solution 3" <<endl;
  int arr3[] =  {1, 1, 0, 0, 0, 1};
  int n3 = 6;
  printMinflip(arr3, n3);

  return 0;
}
