
class Solution{
public:
  long long reversedBits(long long x) {
      bitset<32> input(x);
      long long int res = 0;
      for(int i = 0; i < 32; i++){
          res <<= 1;
          res |= (input[i] & 1);
          input >> 1;
      }
      return res;
  }
};
