#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int solve(int i,int j,long long int *coins)
{
	if(i>j)
		return 0;

	//recusive case;

	int first= coins[i]+min(solve(i+2,j,coins),solve(i+1,j-1,coins));
	int last=  coins[j]+min(solve(i,j-2,coins),solve(i+1,j-1,coins));
	long long int ans=max(first,last);
	return ans;
}

int main() {
	long long int coins[50];

	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>coins[i];
	}
	cout<<solve(0,n-1,coins);
	return 0;
}