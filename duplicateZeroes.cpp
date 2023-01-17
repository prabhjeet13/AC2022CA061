class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
     
     vector<int>temp;

    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==0)
        {
            temp.push_back(arr[i]);
            temp.push_back(arr[i]);
        }
        else {
            temp.push_back(arr[i]);
        }

        if(temp.size() == arr.size())
             break; 
                
        if(temp.size() > arr.size())
        {
            temp.erase(temp.begin()+arr.size(),temp.begin()+temp.size());
            break;
        }
    }
    arr = temp;

    }
};
