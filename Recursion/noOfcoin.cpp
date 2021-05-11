

// my solution with recursion which will take more time obviously

class Solution {
public:
    long long countPath(int m, int n, int k, vector<vector<int>> arr){
        if(m < 0 || n < 0 || k < 0) return 0;
        if(m == 0 && n == 0) return (k == arr[m][n]); // int value of this  will be 1;
        return countPath(m - 1 , n, k - arr[m][n], arr)+ countPath(m , n-1, k - arr[m][n], arr);
    }
    long long numberOfPath(int n, int k, vector<vector<int>> arr){
        memset(dp, -1, sizeof(dp));// filling dp with -1 all;
        return countPath(n - 1, n - 1, k, arr);
    }
};

// my solution with dp taking too much time in submit;
class Solution {
public:
    long long dp[101][101][101];

    long long countPath(int m, int n, int k, vector<vector<int>> arr){
        if(m < 0 || n < 0 || k < 0) return 0;
        if(m == 0 && n == 0) return (k == arr[m][n]); // int value of this  will be 1;
        if(dp[m][n][k] != -1) return dp[m][n][k];

        dp[m][n][k] = countPath(m - 1 , n, k - arr[m][n], arr)+
                         countPath(m , n-1, k - arr[m][n], arr);
        return dp[m][n][k];
    }
    long long numberOfPath(int n, int k, vector<vector<int>> arr){
        memset(dp, -1, sizeof(dp));// filling dp with -1 all;
        return countPath(n - 1, n - 1, k, arr);
    }
};
