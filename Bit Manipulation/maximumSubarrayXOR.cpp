// Given an array arr[] of N positive integers.
// Find an integer denoting the maximum XOR subset value in the given array arr[]


// exponential time complexity  O(2^n)

class Solution
{
    public:
    int maxSub(int arr[],int c, int xr, int n){
        if(c == n) return xr;
        return max(maxSub(arr, c + 1, xr ^ arr[c], n), maxSub(arr, c + 1, xr, n));
    }

    int maxSubarrayXOR(int arr[], int N)
    {
        int xr = arr[0];
        return max(xr, maxSub(arr, 0, xr, N));
    }
// better implementation in terms of time complexity
    int maxSubarrayXOR(int set[], int n)
{
    int index = 0;
    for (int i = 31; i >= 0; i--)
    {
        int maxInd = index;
        int maxEle = INT_MIN;
        for (int j = index; j < n; j++)
        {
            if ((set[j] & (1 << i)) != 0 && set[j] > maxEle )
                maxEle = set[j], maxInd = j;
        }
        if (maxEle == INT_MIN)
        continue;
        swap(set[index], set[maxInd]);
        maxInd = index;
        for (int j=0; j<n; j++)
        {
            if (j != maxInd &&
               (set[j] & (1 << i)) != 0)
                set[j] = set[j] ^ set[maxInd];
        }
        index++;
    }
    int res = 0;
    for (int i = 0; i < n; i++)
        res ^= set[i];
    return res;

}
};
