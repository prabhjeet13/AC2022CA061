class Solution{
    bool isPrime(int d)
    {       
            if(d==0 || d ==1)   //edge_______case
                return false;
        
            bool ans = true;
            for(int i=2;i<=sqrt(d);i++)
            {
                if(d%i==0)
                {
                    ans = false;
                    break;
                }
            }
            return ans;
    }
public:
    int primeSum(int N){
        int sum =0;
        while(N > 0)
        {
            int d = N%10;
            if(isPrime(d))
            {
                sum += d;
            }
            N /= 10;
        }
        return sum;
    }
};
