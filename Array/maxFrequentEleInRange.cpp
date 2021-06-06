#include<bits/stdc++.h>

using namespace std;

int getMaxFrequentEle(int left[], int right[], int n){
    vector<int> points(1000, 0);

    for(int i = 0; i < n; i++){
        points[left[i]]++;
        points[right[i]+1]--;
    }
    int max = 0; int ele = -1, sum = 0;
    for(int i = 1; i < 1000; i++){
        sum+= points[i];
        if(sum > max){
            max  = sum;
            ele = i;
        }
    }
    return ele;

}

// we are said to assume the value ranges never go beyound max length of array;
// use lenght >= 0 and lenght <= 1000;

int main(){
   // range always >= 1
   int l[] = {1, 2, 3}; // start ranges
   int r[] = {3, 5, 7}; // end indexes of array;
   int n = 3;

   cout << getMaxFrequentEle(l, r, n);

   return 0;

}
