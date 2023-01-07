class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be search
    int searchInSorted(int arr[], int N, int K) 
    { 
        int ans = -1;
        int start = 0;
        int end = N-1;
        int mid = start + (end - start)/2;
        
        while(start<=end)
        {
            if(arr[mid] == K)
            {
                return 1;
            }
            else if(arr[mid] < K)
            {
                start = mid + 1;
            }
            else if(arr[mid] > K)
            {
                end = mid - 1;
            }
            mid = start + (end - start)/2;
        }
    return -1;     
    }
};
