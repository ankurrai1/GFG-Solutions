// Given a Binary Number B, find its decimal equivalent

class Solution
{
	public:
		int binary_to_decimal(string str)
		{
		    int n = str.size();
		    int num = 0, k = 1;
		    for(int i = n; i >= 0; i--){
		        if(str[i -1] & 1){
		            num += k;
		        }
		        k *= 2;
		    }
		    return num;
		}
};
