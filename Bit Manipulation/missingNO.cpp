int MissingNumber(vector<int>& arr, int n) {
    int missing = 0;
    for(int i=1; i <= n; i++) missing ^= i;
    for(int i=0; i < n - 1; i++) missing ^= arr[i];
    return missing;
}
