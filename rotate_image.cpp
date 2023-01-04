class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
            vector<vector<int>> temp(matrix);
            int rows = matrix.size();
            int cols = matrix[0].size();
            int l,k=cols-1;
            for(int i=0;i<rows;i++)
            {
                l=0;
                for(int j=0;j<cols;j++)
                {
                    matrix[l++][k] = temp[i][j]; 
                }
                k--;
            }
    }
};
