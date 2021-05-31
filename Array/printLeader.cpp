#include<bits/stdc++.h>

using namespace std;

void printLeaders(int arr[], int n){
    int max = arr[n-1];
    cout << max << " ";
    for(int i = n -2; i>=0; i--){
        if(arr[i] >= max){
            cout << arr[i]<< " ";
            max=arr[i];
        }
    }

}

int main(){

  int arr[] = {7,10,4,3,6,5,2};
  int n = 7;
  printLeaders(arr, n);

   cout << endl;

  int arr2[] =  {1, 2, 3, 4, 5, 6, 7}; // 7 leader only;
  int n2 = 7;
  printLeaders(arr2, n2);

  return 0;
}
