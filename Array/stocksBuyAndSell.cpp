#include<bits/stdc++.h>

using namespace std;

int stockBuyAndSell(int arr[], int n){
   int profit = 0;
    for(int i = 0; i < n -1; i++){
        if(arr[i] < arr[i+1]) profit += (arr[i+1] - arr[i]);
    }
    return profit;
}

int main(){

  int arr[] = {1, 5, 3, 8, 12};
  int n = 5;
  int max_profit1 = stockBuyAndSell(arr, n);
  cout << max_profit1 << endl;



  int arr2[] =  {1, 5, 3, 1, 2, 8, 7};
  int n2 = 7;
  int max_profit2 = stockBuyAndSell(arr2, n2);
  cout << max_profit2 << endl;


  return 0;
}
