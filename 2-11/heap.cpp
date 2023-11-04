#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq;
    int a[]={9,1,2,5,6,7,8};
    for(int i=0;i<7;i++)
    {
        pq.push(a[i]);
    }
    // cout<<pq.empty()<<endl;
    while(!pq.empty())
    {
        cout<<pq.top()<<endl;
        pq.pop();
    }
    // cout<<pq.top()<<endl;
    // pq.pop();
    // cout<<pq.top();

    return 0;
}