// Given an array A[] of N positive integers.
// The task is to find the maximum of j - i subjected to the constraint of A[i] <= A[j].

// Time and space complexity must be O(n) only


class Solution{
    public:

    // arr[]: input array
    // n: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int arr[], int n)
    {
        int minArr[n], maxArr[n], j = n -1;
        minArr[0] = arr[0]; maxArr[j] = arr[j];

        // we created two arrays in which first will have min of left; and
        // other will have max from right to follow  A[i] <= A[j] case in single go.

        for(int i = 1; i < n; i++){
            if(arr[i] < minArr[i-1]) minArr[i] = arr[i];
            else minArr[i] = minArr[i-1];

            // we can do above and below tasks in two saprate loops it will not affect time complexity
            // becasuse 4 task n times of 2 tasks in n and again 2 tasks in n will cost same time;

            if(arr[j -i] > maxArr[j - i + 1]) maxArr[j - i] = arr[j - i];
            else maxArr[j - i ] = maxArr[j - i + 1];
        }

        // Max array will have maximum element upto that position from all right
        // Min array will have minimum element upto that position from all left

        // the above will help to find maximum and for that minimum how far we can go by setting min pos;
        // and after that we count the diff between and check for max;
        // to move minPoint we used the other loop to find next feasible position for given condition;

        int maxDiff = 0;
        int minPoint = 0;
        int maxPoint = 0;
        while(maxPoint < n){
          // following is move until A[i] <= A[j] case follows
            while(maxArr[maxPoint] >= minArr[minPoint] && maxPoint < n) maxPoint++;

            // find diff and set the max one;
            maxDiff = max(maxDiff, (maxPoint - minPoint));

            // to find next suitabl condition for A[i] <= A[j]
            while(minArr[minPoint] > maxArr[maxPoint] && minPoint < maxPoint ) minPoint++;
        }

        return maxDiff - 1;
    }
};
