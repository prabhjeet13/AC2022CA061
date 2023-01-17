class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        vector<string> str;
        string temp;
        
        for(int i=0;i<S.length();i++)
        {
            if(S[i]!='.')
            {
                temp.push_back(S[i]);
            }
            else{
                str.push_back(temp);
                temp.clear();
            }
        }
        str.push_back(temp);
        reverse(str.begin(),str.end());
        temp.clear();
        for(int i=0;i<str.size();i++)
        {
            if(i==str.size()-1)
            {
                temp = temp + str[i];
            }
            else {   temp = temp + str[i];
                temp.push_back('.');
            }
        }
        return temp;
    } 
};
