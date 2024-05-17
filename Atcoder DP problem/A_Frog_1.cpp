

#include <bits/stdc++.h> 
using namespace std;
//Top-Down Approach
int dp1(int ind,vector<int>&heights,vector<int>&dp)
{
    if(ind == 0) return 0;
    if(dp[ind] != -1) return dp[ind];
    int left = dp1(ind-1,heights,dp) + abs(heights[ind]-heights[ind-1]);
    int right = INT_MAX;
    if(ind > 1) right = dp1(ind-2,heights,dp) + abs(heights[ind]-heights[ind-2]);
    return dp[ind] = min(left,right);
}
//Tabulation Method - Bottom Up Approach
/*
    vector<int>dp(n,0);
    dp[0]=0;
    for(int i=1;i<n;i++)
    {
        int firststep = dp[i-1] + abs(heights[i] - heights[i-1]);
        int secondstep = INT_MAX;
        if(i > 1) secondstep = dp[i-2] + abs(heights[i] - heights[i-2]);
        dp[i] = min(firststep,secondstep); 
    }
    return dp[n-1];
*/
//Space Optimization
/*
    int prev=0;
    int prev2=0;
    for(int i=1;i<n;i++)
    {
        int firststep = prev + abs(heights[i]-heights[i-1]);
        int secondstep = INT_MAX;
        if(i>1) secondstep = prev2+abs(heights[i]-heights[i-2]);
        int curi = min(firststep,secondstep);
        prev2 = prev;
        prev = curi;
    }
    return prev;
*/
int frogJump(int n, vector<int> &heights)
{
    vector<int>dp(n+1,-1);
    return dp1(n-1,heights,dp);
}