#include<bits/stdc++.h>

using namespace std;

void print(int arr[], int n){
  for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
}

int SecondHighest(int arr[], int n){
    int h1 = INT_MIN, h2 = INT_MIN;

    for(int i = 0; i < n; i++){
        if(arr[i] > h2 && arr[i] > h1){
            h2 = h1;
            h1 = arr[i];
        }
        else if(arr[i] > h2 && arr[i] < h1) h2 = arr[i];
    }

    return h2 == INT_MIN ? -1 : h2;
}

int main(){
  int arr[] = {-7, 1, 5, 2, -4, 3, 7};
  int n = 7;
  int res1 = SecondHighest(arr, n);
  cout << res1 << endl;

  int arr2[] =  {1, 2, 3, 4, 4, 4, 3};
  int n2 = 7;
  int res2 = SecondHighest(arr2, n2);
  cout << res2 << endl;

  return 0;
}
