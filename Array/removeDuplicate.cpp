#include<bits/stdc++.h>

using namespace std;

void print(int arr[], int n){
  for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}

int removeDuplicate(int arr[], int n){
    int slow = 0; int fast = 0;
    while(fast < n){
        while(arr[fast] == arr[slow]) fast++;
        arr[++slow] = arr[fast++];
    }
    return slow;
}

int main(){
  int arr[] = {1,1,2,3,4,4,4};
  int n = 7;
  int res1 = removeDuplicate(arr, n);
  print(arr, res1);

  int arr2[] =  {1, 3, 3, 3, 4, 4, 4};
  int n2 = 7;
  int res2 = removeDuplicate(arr2, n2);
  print(arr2,res2);

  return 0;
}
