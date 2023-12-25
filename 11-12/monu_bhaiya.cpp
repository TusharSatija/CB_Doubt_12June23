#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    
    string s;
    cin>>s;

    vector<int> LastIndex(26,0);
    //  int LastIndex[26]={0};
    for(int i=0;i<s.size();i++)
    {
        LastIndex[s[i]-'a']=i;
    }
    vector<bool> visted(26,false);

    stack<char> stk;
    for(int i=0;i<s.size();i++)
    {

        if(visted[s[i]-'a'])
        {
            continue;
        }
        while(!stk.empty() and  stk.top()>s[i] and i<LastIndex[stk.top()-'a'])
        {
            visted[stk.top()-'a']=false;
            stk.pop();
        }
        stk.push(s[i]);
        visted[s[i]-'a']=true;
    }
    string op="";
    while(!stk.empty())
    {
        op+=stk.top();
        stk.pop();
    }

    reverse(op.begin(),op.end());
    cout<<op;

}
