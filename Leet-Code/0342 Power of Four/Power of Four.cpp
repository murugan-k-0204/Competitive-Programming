class Solution {
public:
    bool isPowerOfFour(int num) {
        
		int mask = 0b01010101010101010101010101010101;
		return num>0 && (num&(num - 1)) == 0 && (num | mask) == mask;
	    
	    // num>0  - >  check negative number
	    // num& num(num-1)==0 check if is a power of 2
	    		//16 -> 10000 & 1111 == 0 for this we used.
	    // num| mask  - > check whether it is in that sequence.
	    
    }
};
