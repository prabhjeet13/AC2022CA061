class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        set<int> s;
        for(int i=0;i<n;i++)
        {
            s.insert(arr1[i]);
        }
        
        for(int i=0;i<m;i++)
        {
            s.insert(arr2[i]);
        }
        vector<int> v(s.begin(),s.end());
        return v;
        
        // vector<int> v;
        // 2nd way that i am using has passed 213 casses and failed for remaining b/c of TLE.
        // for(int i=0;i<n;i++)
        // {
        //     if(find(v.begin(),v.end(),arr1[i]) == v.end())
        //     {
        //         v.push_back(arr1[i]);
        //     }
        // }
        
        // for(int j=0;j<m;j++)
        // {
        //     if(find(v.begin(),v.end(),arr2[j]) == v.end())
        //     {
        //         v.push_back(arr2[j]);
        //     }
        // }
        
        // sort(v.begin(),v.end());
        // return v;
    }
};
