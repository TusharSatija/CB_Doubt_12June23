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
         
        vector<int> dp(nums.size(),-1);
        return solve(nums,0,nums.size(),dp) ;
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