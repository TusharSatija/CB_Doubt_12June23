#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main () {
	int n,m;
	cin>>n>>m;
	int arr[1000][1000];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	int row[1000]={0};
	int col[1000]={0};
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(arr[i][j]==1)
			{
				row[i]=1;
				col[j]=1;
			}
		}
	}
	for(int j=0;j<m;j++)
	{
		if(col[j])
		{
			for(int i=0;i<n;i++)
			{
				arr[i][j]=1;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		if(row[i])
		{
			for(int j=0;j<m;j++)
			{
				arr[i][j]=1;
			}
		}
	}

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
