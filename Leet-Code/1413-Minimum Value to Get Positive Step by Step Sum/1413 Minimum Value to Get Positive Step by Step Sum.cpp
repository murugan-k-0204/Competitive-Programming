
//  Time: O(N)

class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int minimum,a;
        minimum=a = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            a+=nums[i];
            minimum = min(minimum,a);    
        }
        if(minimum>0) return 1;
        return abs(minimum)+1;
    }
};
