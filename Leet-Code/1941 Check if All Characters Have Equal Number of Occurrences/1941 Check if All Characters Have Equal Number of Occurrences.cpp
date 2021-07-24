class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int> count;
        for(char c: s)
            count[c]++;
        bool tr = true;
        int first = 0;
        for (auto cnt: count)
        {
            if(tr){
                first = cnt.second;
                tr = false;
                continue;
            }
            if(first != cnt.second)
                return false;
        }
        return true;
    }
};
