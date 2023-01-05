class Solution{
  public:
    /*you are required to complete this method*/
    int convertFive(int n)
    {
            string str;
            stringstream ss;
            ss << n;
            ss >> str;
            
            for(int i=0;i<str.length();i++)
            {
                if(str[i]=='0')
                {
                    str[i]='5';
                }
            }
            
            stringstream sst(str);
            sst >> n;
        return n;    
    }
};
