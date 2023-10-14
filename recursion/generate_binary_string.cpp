#include<iostream>
using namespace std;
void solve(string s,int i,string op)
{
    //base case ....
    if(s[i]=='\0')
    {
        cout<<op<<endl;
        return;
    }

    if(s[i]=='?')
    {
        solve(s,i+1,op+"0");
    }
     if(s[i]=='?')
    {
        solve(s,i+1,op+"1");
    }
    else
    {
        solve(s,i+1,op+s[i]);
    }

}
int main()
{
    string s;
    cin>>s;
    solve(s,0,"");
    return 0;
}