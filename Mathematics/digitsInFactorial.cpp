// logic behind in this;

// Let's take 10!=10x to get the value of x.
// Take log both sides log(10)!=xlog10
// log(10*9*8*..*1)=x
// log10+log9+log8+...+log1=x
// Take the floor of sum and add 1 to get the number of digits.

int digitsInFactorial(int N)
{
    double digit_c = 0;
    while(N) digit_c += log10(N--);
    return floor(digit_c) + 1;
}
