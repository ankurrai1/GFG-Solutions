// You are given an integer N. You need to convert all zeroes of N to 5.

int convertFive(int n) {
    int i = 0, res = 0, digit;
    while(n > 0){
        digit = n % 10;
        n = n / 10;
        if(digit == 0) digit = 5;
        res += digit*(pow(10,i));
        i++;
    }
    return res;
}
