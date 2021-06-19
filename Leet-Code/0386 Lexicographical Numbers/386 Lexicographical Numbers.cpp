class Solution {
public:
    void dfs(int target, int n,vector<int>& vec){
        if(target>n) return;
        vec.push_back(target);
        dfs(target*10,n,vec);
        if(target%10!=9)
            dfs(target+1,n,vec);
    }
    vector<int> lexicalOrder(int n) {
        vector<int> vec;
        dfs(1,n,vec);
        return vec;
    }
};
