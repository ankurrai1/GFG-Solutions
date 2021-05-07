#include<bits/stdc++.h>

using namespace std;

// For all comment I am assuming that n = 3 and we will go with it;

// Recuesion Faith :  fowllowing function will move n - 1 disks form t1 to t3 if I call this functioin;
//                    I really don't know how but it is my faith.

// now let's solve the problem for 3


// One point to not that always we can move disks form position of t1 to t3 position using t2 this is a signature;

void towerOfHanoi(int n, char t1, char t2, char t3){
    // if there is not disk left to move then simply return;
    if(n == 0) return;
    // if there are 3 disks on t1 then according our faith we want to move all 2 top disks form t1 to t2 using t3
    // I don't know how it will be done but this is my faith and I will call function
    // so in following we are calling function accordint to remove top 2 disk and shift it to t2 tower;
    towerOfHanoi(n - 1, t1, t3, t2);// I am telling function to move all n-1 disks form t1 to t2 so that my nth disk will be freed to move
    // now its my task to move to nth disk form t1 to t3; so we will print instruction to move
    cout << " move disk " << n << " from " << t1 << " to " << t3 << endl;
    // if nth disk is at its right place the our task what is left is to move other n -1 disks to t3 on top of the nth disk that is all our task;
    // for for that process we will go wtih our faith and move all disk what we move earlier to t2 using t3 will move from t2 to t3 using t1;
    towerOfHanoi(n - 1, t2, t1, t3); // i am telling fucntion to move all n-1 disks from t2(where we moved them earlier) to t3 to complete our task

    // and that's it this function will do all its work and of them;
}

int main(){
    int n = 5;
    towerOfHanoi(3, 'A' , 'B', 'C' );// just for understanding
    cout << "\n ---------------------------------------------------------------------------------- \n" <<endl;
    towerOfHanoi(n, 'A' , 'B', 'C' );
    return 0;
}
