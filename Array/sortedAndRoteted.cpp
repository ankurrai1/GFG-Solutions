// Given an array arr[] of N distinct integers, check if this array is Sorted (non-increasing or non-decreasing) and Rotated counter-clockwise. Note that input array may be sorted in either increasing or decreasing order, then rotated. A sorted array is not considered as sorted and rotated, i.e., there should be at least one rotation.
#include <bits/stdc++.h>

using namespace std;


// first check if array is increasing or decreasing
// if array is increasing then only one peak is allowed
// if array is decreasing then one deep  is allowed
// if all checks fail then return true


bool checkRotatedAndSorted(int arr[], int n){
    bool isIncreasing = false;
    int
      mn = INT_MAX, mnp  = -1,
      mx = INT_MIN, mxp  = -1;

      // to find max and min element and minimum element
    for(int i = 0; i < n; i++){
        if(arr[i] < mn){
            mn = arr[i];
            mnp = i;
        }
        if(arr[i] > mx){
            mx = arr[i];
            mxp = i;
        }
    }
    // finding whether array is sorted in increasing order order of decreasing order
    if(mxp + 1 == mnp) isIncreasing = true;
    else if(mnp + 1 == mxp) isIncreasing = false;
    else return false;

    // increasing order case for finding, only one unorder is allowed
    if(isIncreasing){
        if(arr[n-1] > arr[0]) return false;
        int peak = 0; // upto 1 peak allowed only
        for(int i = 1; i < n; i++){
            if(arr[i] < arr[i - 1] && peak > 0) return false;
            if(arr[i] < arr[i - 1] && peak == 0) peak++;
        }
    }
    else{
        if(arr[n-1] < arr[0]) return false;
        int low = 0; // upto 1 low allowed
        for(int i = 1; i < n; i++){
            if(arr[i] > arr[i - 1] && low > 0) return false;
            if(arr[i] > arr[i - 1] && low == 0) low++;
        }
    }
    return true;
}
