class Solution{
public:

	int isDivisible(string s){
	    int num = 0;
	    for(int i = 0; i < s.size(); i++){
	        if(i & 1){
	            num += (int)s[i] - 48;
	        }
	        else num -= (int)s[i] - 48;
	    }
	    num = abs(num);
	    return (num % 3 == 0);
	}

};
