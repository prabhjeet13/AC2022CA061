class Solution{
    public:
    int firstElementKTime(int a[], int n, int k)
    {   
    map<int,int> mat;
    int ans = -1;
        for(int i=0;i<n;i++)
        {
            mat[a[i]]++;
            if(mat[a[i]]==k)
            {
                ans = a[i];
                break;
            }
        }
        return ans;
    }
};
