class Solution {
public:
    int findPeakElement(vector<int>& a) 
    {
        int  start = 0;
        int end = a.size() - 1;
        int mid = start + (end-start)/2;
        while(start<end)
        {
            if(a[mid] < a[mid+1])
            {
                start = mid + 1;
            }
            else {
                end = mid;
            }
            mid = start + (end-start)/2;
        }
        return a[start];
    }
};


