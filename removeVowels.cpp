class Solution{
public:	
		
	string removeVowels(string S) 
	{
	    string temp;
	    for(int i=0;i<S.length();i++)
	    {
	        if(S[i]!='a' && S[i]!='e' && S[i]!='i' && S[i]!='o' && S[i]!='u')
	        {
	            temp.push_back(S[i]);
	        }
	    }
	    return temp;
	}
};
