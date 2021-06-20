class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        int Max=-1,matrix_tot=0;
        for (auto mat:matrix)
        {
            int row_tot=0;
            for (int i : mat)
                row_tot+=i;
            matrix_tot+=row_tot;
            Max=max(row_tot,Max);
        }
        for (int i=0; i<n;i++)
        {
            int col_tot=0;
            for (int j=0; j<n;j++)
                col_tot+=matrix[j][i];
            Max=max(col_tot,Max);
        }
        return Max*n - matrix_tot;
    } 
};
