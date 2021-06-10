// You are given an array of size n.
// Find the maximum possible length of a subarray such that its elements are arranged
// alternately either as even and odd or odd and


class Solution{
    public:
    //Complete this function
    //Function to find the length of longest subarray of even and odd numbers.
    int maxEvenOdd(int arr[], int n)
    {
       int i = 1, count = 1, maxCount = 0;
       while(i < n){
           while((arr[i] & 1) ^ (arr[i - 1] & 1)  && i < n){
               count++;
               i++;
           }
           maxCount = max(count, maxCount);
           count = 1;
           i++;
       }

       return max(maxCount, count);
    }
}
