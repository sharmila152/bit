#include<iostream>
using namespace std;
int main()
{
   long long  int T;
    cin>>T;
    while(T--)
    {
        long long int N,fact=1;
        cin>>N;
        for(int i=1;i<=N;i++)
        {
            fact=fact*i;
        }
        cout<<fact<<'\n';
        
    }
}
//using recursion
#include<iostream>
using namespace std;
int factorial(int N)
{
    if(N>1)
    return N*factorial(N-1);
    else
    return 1;
}
int main()
{
   long long  int T;
    cin>>T;
    while(T--)
    {
        long long int N;
        cin>>N;
       cout<<factorial(N)<<'\n';
        
    }
}
