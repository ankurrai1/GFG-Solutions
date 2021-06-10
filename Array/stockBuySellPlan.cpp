// problem statement is like following;
// The cost of stock on each day is given in an array A[] of size N.
// Find all the days on which you buy and sell the stock so that in between those
// days your profit is maximum.

#include <bits/stdc++.h>

using namespace std;

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int arr[], int n)
{
    int i;
    vector<int> res;
    bool profit = false;
    for(i = 1; i < n; i++){
        if(arr[i] < arr[i - 1] && profit){
             res.push_back(i - 1);
             profit = false;
        }
        else if(arr[i - 1] < arr[i] && !profit){
            profit = true;
            res.push_back(i - 1);
        }
    }
    if(profit) res.push_back(i - 1);
    if(res.size() <= 1){
        cout << "No Profit";
        return;
    }
    for(int i = 0; i < res.size(); i += 2){
        cout << "(" << res[i] << " " << res[i + 1] << ") ";
    }
}



class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int>> stockBuySell(vector<int> arr, int n){
        vector<vector<int>> buySellPlan;
        bool bought = false;
        int boughtPrice = arr[0];
        for(int i = 1; i < n ; i++){
            int j = i;
            while(arr[j - 1] < arr[j] && j < n){
                j++;
            }
            if(j > i){
                vector<int> plan = {i-1, j-1};
                buySellPlan.push_back(plan);
                i = j;
            }
        }
        return buySellPlan;
    }
};
