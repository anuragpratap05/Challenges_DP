# Challenges_DP
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        
    
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	
	if (n == 0 || a[0] == 0)
	{
	    cout<<INT_MAX;
	}
	else
	{
	
	int dp[n];
	dp[0]=0;
	for(int i=1;i<n;i++)
	{
	    dp[i]=INT_MAX;
	    for(int j=0;j<i;j++)
	    {
	        if(i<=j+a[j] and dp[j]!=INT_MAX)
	        {
	            dp[i]=min(dp[i] , dp[j]+1);
	            break;
	        }
	    }
	}
    cout<<dp[n-1]<<endl;
	}
    }
}
