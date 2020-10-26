# Challenges_DP
#include<bits/stdc++.h>
using namespace std;


int strategy(int a[],int i, int j)
{
    if(i>j)
    {
        return 0;
    }
    
    //if(dp[i][j]!=0)
    //{
        //return dp[i][j];
    //}
    
    int op1=a[i]+min(strategy(a,i+2,j),strategy(a,i+1,j-1));
    int op2=a[j]+min(strategy(a,i+1,j-1),strategy(a,i,j-2));
    int ans=max(op1,op2);
    //dp[i][j]=ans;
    return ans;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    /*int dp[n+1][n+1];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            dp[i][j]=0;
        }
    }*/
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<strategy(a,0,n-1);
}
