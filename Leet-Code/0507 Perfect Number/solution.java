class Solution {
    public boolean checkPerfectNumber(int num) {
        int sum=1;
        double sq =Math.sqrt(num);
        for(int i=2;i<sq;i++){
            if(num%i==0) sum+= i + num/i;
        }
        return num==sum && num!=1;
    }
}
