#include<iostream>
using namespace std;

void solve(int *arr,int n,string s1,int sum1,string s2,int sum2,int i)
{
    if(i==n)
    {
        if(sum1==sum2)
        {
            cout<<s1.substr(1)<<" and "<<s2.substr(1)<<endl;
        }
        return;
    }
    solve(arr,n,s1+" "+to_string(arr[i]),sum1+arr[i],s2,sum2,i+1);
    solve(arr,n,s1,sum1,s2+" "+to_string(arr[i]),sum2+arr[i],i+1);
}
int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    solve(arr,n,"",0,"",0,0);
    return 0;
}