#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool comp(string a,string b)
{
    string ab=a+b;
    string ba=b+a;
    if(ab>ba)
    {
        return true;
    }
    return false;
}
int main()
{       
    int t;
    cin>>t;   //5 
    while (t--)  // 5 
    {
        int n;
        cin>>n;
        string s[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        sort(s,s+n,comp); 

        for(int i=0;i<n;i++)
        {
            cout<<s[i];
        }
        cout<<endl;
    }


    return 0;
}