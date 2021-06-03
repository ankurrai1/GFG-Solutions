#include<bits/stdc++.h>

using namespace std;
// solution is based on moores voting algo.
void findMajorityElement(int arr[], int n){
    int mEle = arr[0], meCount = 1;
    for(int i = 0; i < n; i++){
        if(arr[i] == mEle) meCount++;
        else{
            meCount--;
            if(meCount == 0){
                mEle = arr[i];
                meCount = 1;
            }
        }
    }
    if(meCount < 1) {
        cout << "No majority Element found";
        return;
    }
    int c = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == mEle) c++;
    }
    if(c > n/2) cout << mEle << endl;
    else cout << "No majority Element found";

}

int main(){
  int arr[] = {8, 8, 6, 6, 6, 4, 6};
  int n = 7;
  findMajorityElement(arr, n);

  int arr2[] =  {8, 3, 4, 8, 8};
  int n2 = 5;
  findMajorityElement(arr2, n2);

  int arr3[] =  {10, 20, 30, 40, 50, 50, 50,};
  int n3 = 5;
  findMajorityElement(arr3, n3);

  return 0;
}
