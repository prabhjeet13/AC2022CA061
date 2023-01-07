class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        
        int c=0;
        for( auto i : array)
        {
            c = c + i;
        }
        
        c = n*(n+1)/2 - c;
        
        return c;
    }
};
