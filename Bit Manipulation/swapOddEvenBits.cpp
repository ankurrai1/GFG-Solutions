// swap all odd even bits to its right adjacent bits

unsigned int swapBits(unsigned int n)
{

 int even = 0xAAAAAAAA & n;
 int odd = 0x55555555 & n;
 even >>= 1;
 odd <<= 1;
 int res = even | odd;
 return res;
}
