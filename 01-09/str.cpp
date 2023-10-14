#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin>>n;
    cout<<n<<"  ";

    char l='0';
    for(int i=0;n[i]!='\0';i++)
    {
        if(n[i]>l)
        {
            l=n[i];
        }
    }
    cout<<l;
    // cout<<n[2]<<"  ";
    // cout<<n[5]<<"  "; 
    // swap(n[0],n[1]);
    // cout<<n<<"  ";

    
    //kadane algo


    return 0;
}