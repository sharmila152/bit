class Solution
{
    public:
    int maxConsecutiveOnes(int N)
    {
        int count=0;
        while(N>0)
        {
            N=N&(N<<1);
            count+=1;
        }
        return count;
        // code here
    }
};
