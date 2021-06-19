class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int x=matrix.size(),y=matrix[0].size();
        int row[x],col[y];
        for (int i = 0; i < x; i++) row[i]=1;
        for (int i = 0; i < y; i++) col[i]=1;

        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                if(matrix[i][j]==0){
                    row[i]=0;
                    col[j]=0;
                }
            }
        }
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                if (row[i]==0 || col[j]==0)
                {
                    matrix[i][j]=0;
                }   
            }   
        }      
    }
};
