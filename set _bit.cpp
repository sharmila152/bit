lass Solution {
  public:
    int setBits(int N) {
        int count=0,temp;
        while(N>0)
        {
            temp=N&1;
            count+=temp;
            N=N>>1;
            
        // Write Your Code here
    }
    return count;
    }
};
