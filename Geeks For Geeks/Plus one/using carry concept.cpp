class Solution {
  public:
    vector<int> increment(vector<int> arr ,int N) {
        arr[N-1]+=1;
        int carry = arr[N-1]/10;
        arr[N-1]=arr[N-1]%10;
        int i;
        for(i=N-2; i>=0; i--){
            if(carry){
                arr[i]+=1;
                carry = arr[i]/10;
                arr[i]=arr[i]%10;
            }
        }
        if(carry){
            arr.insert(arr.begin(),1);
            return arr;
        }
        return arr;
    }
};
