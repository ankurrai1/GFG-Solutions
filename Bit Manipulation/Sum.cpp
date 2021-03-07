#include<bits/stdc++.h>

using namespace std;

class Solution
{
    public:
    int sum(int a , int b)
    {
        int sum = 0, carry = 0;
        while(b){
            sum = a^b;
            carry = (a & b) << 1;
            a = sum;
            b = carry;
        }
        return a;
    }
};
