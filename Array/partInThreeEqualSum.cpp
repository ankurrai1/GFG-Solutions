class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int n = arr.size();
        vector<int> prefix(n);
        prefix[0] = arr[0];
        for(int i = 1; i < n; i++) prefix[i] = arr[i] + prefix[i-1];
        if(prefix[n-1] % 3 != 0) return false;
        int targetSum = prefix[n - 1] / 3;
        int s = -1, e = -1;
        for(int i = 0; i < n; i++){
            if(prefix[i] == targetSum){
                s = i;
                break;
            }
        }
        int sum = 0;
        for(int i = n - 1; i > s; i--){
            sum += arr[i];
            if(sum == targetSum){
                e = i;
                break;
            }
        }
        if(e == -1 || s == -1 || e - s <= 1) return false;
        else if(prefix[e-1]-prefix[s] == targetSum) return true;
        return false;
    }
};
