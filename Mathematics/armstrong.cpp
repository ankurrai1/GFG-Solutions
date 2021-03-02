// An Armstrong number of three digits is an integer such that the sum of the cubes of its digits is equal to the number itself


string armstrongNumber(int n){
       int temp = n;
       int sum = 0;
       while(temp > 0){
           int digit = temp % 10;
           sum += (digit * digit * digit);
           temp /= 10;
       }
       if(sum == n) return "Yes";
       else return "No";
   }
   
