#include<bits/stdc++.h>

using namespace std;

int getSetBitCount(int n){
   int countOfsetBit = 0;
    n++;
    // increase n by one to make it start form 1 not zero
    for(int pattern = 2; pattern / 2 < n; pattern *= 2) {
        // LSB is in pattern of 01 so start with 2
        // if patterns half is grater than n itself that means we will get only zero
        // increase patterns according to power of 2 form 1 to 32;

        int noOfpattern = n / pattern;
        countOfsetBit += noOfpattern * pattern / 2 ;// pattern by to because a full pattern has half of set
        int otherThanPattern = n % pattern;
        if(otherThanPattern > pattern / 2){
            // pattern / 2 will ensure there is some set bit until half otherwise it is only unset bit
            // because pattern start with zeros always after one full cycle
            countOfsetBit += otherThanPattern - (pattern / 2); // to get total no of set bit in what is left after compete cycle we avoid first zeros
        }
    }
    return countOfsetBit;
}

int main(){
    int n  = 7;
    cout << getSetBitCount(n) << endl;
    return 0;
}
