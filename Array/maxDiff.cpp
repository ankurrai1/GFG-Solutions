#include<bits/stdc++.h>

using namespace std;

void maxdiff(int arr[], int n){
    int m = arr[0], mi = arr[0];
    for(int i = 0; i<n; i++){
        if(arr[i] >= m) m = arr[i];
        else if(arr[i] <= mi) mi = arr[i];
    }

    cout << (m - mi )<< endl;

}

int main(){

  int arr[] = {1,-10,4,3,6,-5,0};
  int n = 7;
  maxdiff(arr, n);



  int arr2[] =  {1, 2, 3, -4, 5, 6, 7}; // 7 leader only;
  int n2 = 7;
  maxdiff(arr2, n2);

  return 0;
}
