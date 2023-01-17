class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max =0;
        int i= 0,m;

        while(i<sentences.size())
        {
            m = count(sentences[i].begin(),sentences[i].end(),' ');
            m++;
            if(m > max)
            {
                max = m;    
            }
            i++;
        }
        return max;
    }
};
