#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long int dp[5000][5000];



int solve(int i,int j,long long int *coins)
{
	if(i>j)
		return 0;

	if(dp[i][j]!=-1)
	{
		return dp[i][j];
	}
	//recusive case;

	int first= coins[i]+min(solve(i+2,j,coins),solve(i+1,j-1,coins));
	int last=  coins[j]+min(solve(i,j-2,coins),solve(i+1,j-1,coins));
	long long int ans=max(first,last);

	if(i<5000 and j<5000)
	{
		dp[i][j]=ans;
	}
	return  ans;
}
int main() {
	long long int coins[10050];

	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>coins[i];
	}
	memset(dp,-1,sizeof(dp));
	cout<<solve(0,n-1,coins);
	return 0;
}