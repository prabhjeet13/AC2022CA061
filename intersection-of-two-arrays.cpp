class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>t;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        int i=0,j=0;

        while(i<nums1.size() && j<nums2.size())
        {
                if(nums1[i]==nums2[j])
                {
                    t.insert(nums1[i]);   
                }
                if(nums1[i]<nums2[j])
                {
                    i++;
                }
                else {
                    j++;
                }
        }
        vector<int>v(t.begin(),t.end());
    
    return v;
    }
};
