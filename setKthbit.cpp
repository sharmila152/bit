class Solution
{
public:
    int setKthBit(int N, int K)
    {
       int S,R;
       S=1<<K;
       R=N|S;
       return R;
     }
    
    
    
};

