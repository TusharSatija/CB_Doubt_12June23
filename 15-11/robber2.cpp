 #include<bits/stdc++.h>
 using namespace std;
 
 int solve(vector<int> nums,int i,int  n,vector<int> &dp)
    {
        if(i>=n)
        {
            return 0;
        }
        if(dp[i]!=-1)
        {
            return dp[i];
        }

        int take=0;
        take=nums[i]+solve(nums,i+2,n,dp);
        int notTake= 0 + solve(nums,i+1,n,dp);

        return dp[i]=max(take,notTake); 
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        vector<int> dp(nums.size(),-1);
        vector<int> dp1(nums.size(),-1);
        return max(solve(nums,0,nums.size()-1,dp),solve(nums,1,nums.size(),dp1));

    }
int main()
{
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    cout<<rob(nums);
}