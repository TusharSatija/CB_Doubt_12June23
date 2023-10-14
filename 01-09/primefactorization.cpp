#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // cout<<sqrt(n); //n=15

    for(int i=2;i<sqrt(n);i++)   //3<3.8
    {
        while (n%i==0 and n!=0)
        {
            cout<<i<<"  ";   //3   
            n=n/i;     //n=5;
        }
    }
    
    if(n>1)      //  
    {
        cout<<n;
    }
    return 0;
}