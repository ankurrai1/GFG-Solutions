// task is to count the no of ones in sorted array in O(logn)

int getLastIndex(int arr[], int s, int e){
    while(s<=e){
        int mid = s + (e - s) / 2;
        cout << mid << endl;
        if(arr[mid] == 1 && arr[mid +1] == 0 ) return mid;
        if(arr[mid] == 0) e = mid - 1;
        else s = mid +1;
    }
    return -1;
}
int countOnes(int arr[], int N)
{
    return getLastIndex(arr, 0, N-1) + 1;
}
