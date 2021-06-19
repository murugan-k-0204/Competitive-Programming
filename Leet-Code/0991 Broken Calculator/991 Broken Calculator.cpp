class Solution {
public:
    int brokenCalc(int x, int y) {
        int operations=0;
        while(x!=y){
            if(y&1 || x>y) y++;
            else y/=2;
            operations++;
        }
        return operations;
    }
};
