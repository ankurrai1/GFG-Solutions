#include<bits/stdc++.h>

using namespace std;

int trappingRainWater(int arr[], int n){
   int water = 0;

   int lh[n], rh[n];
   lh[0] = arr[0], rh[n-1] = arr[n-1];

    for(int i = 1; i < n ; i++){
        if(arr[i] > lh[i-1]) lh[i] = arr[i];
        else lh[i] = lh[i-1];
    }

    for(int i = n-2; i >= 0; i--){
        if(arr[i] > rh[i+1]) rh[i] = arr[i];
        else rh[i] = rh[i+1];
    }

    for(int i = 1; i < n - 1;  i++){
        water += (min(lh[i], rh[i]) - arr[i]);
    }

    return water;

}

int main(){

  int arr[] = {3, 0, 1, 2, 5};
  int n = 5;
  int max_profit1 = trappingRainWater(arr, n);
  cout << max_profit1 << endl;



  int arr2[] =  {0, 5, 3, 1, 2, 2, 0};
  int n2 = 7;
  int max_profit2 = trappingRainWater(arr2, n2);
  cout << max_profit2 << endl;


  return 0;
}
