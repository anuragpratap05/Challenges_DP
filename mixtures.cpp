# Challenges_DP
#include <bits/stdc++.h>
using namespace std;

long long a[1000];
long long dp[1000][1000];

long long sum(int s, int e)
{
    long long ans=0;
    for(int i=s;i<=e;i++)
    {
        ans+=a[i];
        ans%=100;
    }
    return ans;
}

long long mixtures(int i, int j)
{
    if(i>=j)
    {
        return 0;
    }
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }
    dp[i][j]=INT_MAX;
    for(int k=i;k<=j;k++)
    {
        dp[i][j]=min(dp[i][j],mixtures(i,k)+mixtures(k+1,j)+sum(i,k)*sum(k+1,j));
    }
    return dp[i][j];
}

int main() 
{
    long long n;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            dp[i][j]=-1;
        }
    }
    
    cout<<mixtures(0,n-1);
    
}
