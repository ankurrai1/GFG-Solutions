// Given a number N.Find if the digit sum(or sum of digits) of N is a Palindrome number or not.


bool isPalindrom(int num){
      int temp = num;
      int reverse = 0;
      while(temp){
          reverse = (reverse * 10) + temp % 10;
          temp /= 10;
      }
      return (num == reverse);
  }
    int isDigitSumPalindrome(int N) {
        int sum = 0;
        while(N){
            sum += N % 10;
            N /= 10;
        }
        return isPalindrom(sum);
    }
