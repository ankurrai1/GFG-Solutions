int log2(int x)
{
    int res = 0;
    while (x >>= 1) // test and shift
        res++;
    return res;
}
