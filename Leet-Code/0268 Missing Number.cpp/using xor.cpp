/*
learnt : xor is commutative and associative
*/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res=0;
        for (int i = 0; i < nums.size(); i++)
            res^=nums[i]^(i+1);
        return res;
                
    }
};
