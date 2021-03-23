// Lucky numbers are subset of integers. Rather than going into much theory, let us see the process of arriving at lucky numbers,
// Take the set of integers
// 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19,……
// First, delete every second number, we get following reduced set.
// 1, 3, 5, 7, 9, 11, 13, 15, 17, 19,…………
// Now, delete every third number, we get
// 1, 3, 7, 9, 13, 15, 19,….….
// Continue this process indefinitely……
// Any number that does NOT get deleted due to above process is called “lucky”.



// counter: variable has already been declared in driver code and initialized as 2
// Return True if the given number is a lucky number else return False


bool isLucky(int n, int &counter) {
    if( counter > n) return true;
    if(n % counter == 0) return false; // and if our no is devided by counter
    n -= n /counter; // every case our no is last no basically we are removing element which are deleted in between
    // and here our no repre the positionof that no like position of 5 is 5 in 1 diff
    // for 2 diff position of 5 will be 5 - 5 / 2 = 5 - 2 = 3; now see line no 5
    counter++; // increment of counter
    return isLucky(n , counter);
}
