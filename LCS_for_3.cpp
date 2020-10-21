# Challenges_DP
#include<bits/stdc++.h>
using namespace std;

int dp[201][201][201];

int lcs(string s1, string s2,string s3, int i, int j, int k)
{
    if(s1.length()==i or s2.length()==j or s3.length()==k)
    {
        return 0;
    }
    
    if(dp[i][j][k]!=-1)
    {
        return dp[i][j][k];
    }
    
    if(s1[i]==s2[j] and s2[j]==s3[k])
    {
        return dp[i][j][k]=1+lcs(s1,s2,s3,i+1,j+1,k+1);
    }
    
    int op1=lcs(s1,s2,s3,i+1,j,k);
    int op2=lcs(s1,s2,s3,i,j+1,k);
    int op3=lcs(s1,s2,s3,i,j,k+1);
    //return max(op1,op2);
    return dp[i][j][k] = max(max(op1,op2),op3);
    
}


int main()
{
    memset(dp, -1,sizeof(dp));
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    
    cout<<lcs(s1,s2,s3,0,0,0);
    
}
