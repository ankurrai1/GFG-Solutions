// You are given an array arr[] of N integers including 0.
// The task is to find the smallest positive number missing from the array.
// But you have to do that in O(n) time and O(1) space


class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n)
    {
        int j = 0;
        for(int i = 0; i < n; i++){
            if(arr[i]>0){
                swap(arr[i], arr[j]);
                j++;
            }
        }
        for(int i = 0; i < j; i++){
          if(abs(arr[i]) <= j && arr[abs(arr[i])-1] > 0) {
              arr[abs(arr[i])-1] *= -1;//test to prevent from over again sign change
          }
        }

        for(int i = 0; i < j; i++){
          if(arr[i] > 0) return i + 1;
        }
        return j+1;

    }
};
