# Challenges_DP
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c;
    cin>>n>>c;
    int wt[n];
    int val[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>wt[i];
    }
    
    for(int i=0;i<n;i++)
    {
        cin>>val[i];
    }
    
    int dp[c+1]={0};
    
    for(int i=0;i<=c;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(wt[j]<=i)
            dp[i]=max(dp[i],dp[i-wt[j]]+val[j]);
        }
    }
    cout<<dp[c];
    
}
