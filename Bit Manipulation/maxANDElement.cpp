#include<bits/stdc++.h>

using namespace std;

int getPatternMatchedCount(int arr[], int n, int pattern){
    int matchedElements = 0;
    for(int i = 0; i < n; i++){
        if((pattern & arr[i] )== pattern) matchedElements++;
    }
    return matchedElements;
}

int maxAND(int arr[], int n){
    // we are assumeing given no are of 32 only
    int maxANDupto = 0;
    for(int i = 31; i >= 0; i--){ // start form MSB and generate pattern
        int pattern = maxANDupto | (1 << i);
        int matchedEle = getPatternMatchedCount(arr, n, pattern);
        if(matchedEle >= 2) maxANDupto = pattern;
    }
    return maxANDupto;
}

int main(){
    int n = 4, arr[n] = {4, 8, 12, 16};
    cout << maxAND(arr ,n) << endl;
    return 0;
}
