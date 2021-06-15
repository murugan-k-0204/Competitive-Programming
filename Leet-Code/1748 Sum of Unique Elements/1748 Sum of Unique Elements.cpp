class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int,int> m;
        int tot=0;
        for(int i=0;i<nums.size();i++){
            if(m[nums[i]]==1){
                tot-=nums[i];
                m[nums[i]]=2;
                continue;
            }
            else if(m[nums[i]]==2)
                continue;
            m[nums[i]]=1;
            tot+=nums[i];
        }
        return tot;
    }
};
