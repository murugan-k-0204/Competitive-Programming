class Solution {
  public:
    vector<int> lexicalOrder(int N) {
        vector<int> res(N);
        for (int i = 0, curr = 1; i < N; ++i) {
            res[i] = curr;
            if (curr*10 <= N)
                curr *= 10;
            else {
                if (curr >= N)
                    curr /= 10;
                ++curr;
                while (curr % 10 == 0)
                    curr /= 10;
            }
        }
        return res;
    }
};
