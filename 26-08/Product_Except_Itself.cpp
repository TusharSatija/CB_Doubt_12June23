#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[10000];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int temp[1000];
    int num=1;
    for(int i=0;i<n;i++)   //forward traversal
    {
        temp[i]=num;    //temp[0]=1
        num*=arr[i];    //num=1;
    }


    num=1;
    int temp1[10000];
    for(int i=n-1;i>=0;i--)
    {
        temp1[i]=num;
        num*=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<temp1[i]*temp[i]<<"   ";
    }
    return 0;
}