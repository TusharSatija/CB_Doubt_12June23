#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int, vector<int>, greater<int>> minHeap;
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int i=0;
    while(i<n)
    {
        minHeap.push(arr[i]);
        if(minHeap.size()>k)
        {
            minHeap.pop();
        }
        i++;
    }
    cout<<minHeap.top();
    return 0;
}