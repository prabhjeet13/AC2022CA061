class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<int> temp;
        vector< vector<int>> ans;
        int sum =0;
        for(int i=0;i<numRows;i++)
        {
            for(int j=0;j<=i;j++)
            {
                if(j==0 || j==i)
                  {  
                        temp.push_back(1);
                  } 
                else {
                    sum = ans[i-1][j-1] + ans[i-1][j];
                    temp.push_back(sum);
                }  
            }
            ans.push_back(temp);
            temp.clear();
        }
        return ans;
    }
};
