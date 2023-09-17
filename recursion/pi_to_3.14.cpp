#include<iostream>
using namespace std;
void solve(string s,int i,string op)
{
    if(s[i]=='\0')
    { 
        cout<<op<<endl;
        return;
    }
    if(s[i]=='p' and s[i+1]=='i')
    {
        solve(s,i+2,op+"3.14");
    }
    else
        solve(s,i+1,op+s[i]);
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
      string s;
         cin>>s;
        solve(s,0,"");
    }
    
    return 0;
}