class Solution {
public:
    int countGoodNumbers(long long n) {
        
        long long mod= 1e9+7;
        long long prime=n/2;
        long long even;
        if(n&1)
            even = n/2 +1;
        else
            even = n/2;
            
        // even counts 
        long long y,x,res;
        res=1;
        y=even;
        x=5;
        while (y > 0) {

            if (y & 1)
                res = (res * x)%mod;

            y = y >> 1;
            x = (x * x)%mod;
        }
        y=prime;
        x=4;
        while (y > 0) {

            if (y & 1)
                res = (res * x)%mod;

            y = y >> 1;
            x = (x * x)%mod;
        }
        return res;
    }
};
