class Solution {
public:
    int minTimeToType(string word) {
        int size = word.size();
        int start = 1;
        for (int i: word)
        {
            i = i-96;
            size += min(abs(start - i), abs(26 - abs(start - i )));
            cout << size << endl;
            start = i;
        }
        return size;
        
    }
};
