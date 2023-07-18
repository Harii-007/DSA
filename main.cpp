class Solution{
    public:
    //You need to complete this fucntion
    int mod=1000000007;
    long long power(int N,int R)
    {
       if(R==1)
       {
             return N;
       }
       if(R==0)
       {
       return 1;
       }
       long long ans=power(N,R/2) %mod;
       ans=(ans*ans)%mod;
       
       if(R&1) 
       {
           ans=(ans*N) %mod;
       }  
       return ans;
       
       
    }

};