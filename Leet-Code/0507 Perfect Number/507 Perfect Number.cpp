class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum=1;
        for(int i=2;i<sqrt(num);i++){
            if(num%i ==0){
                // cout<<i<<endl;
                sum+=i+num/i;
            }
        }
        if(pow(sqrt(num),2)==num) sum+=sqrt(num);
        // cout<<sum<<endl;
        return sum==num;
    }
};
