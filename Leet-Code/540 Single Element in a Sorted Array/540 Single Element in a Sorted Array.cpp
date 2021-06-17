class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start=0, last=nums.size()-1,mid;
        while (start<last)
        {
            mid= start+(last-start)/2;
            if (nums[mid]==nums[mid ^ 1])
            {
                start = mid+1;
            }
            else
                last = mid;
        }
        return nums[start];
    }
};
