#include<iostream>
using namespace std;
void solve(char *op,int n,int open,int close,int i)
{
        //base case
        if(i==2*n)
        {
            op[i]='\0';
            cout<<op<<endl;
            return;
        }
 
        if(open<n)
        {
            op[i]='(';
            solve(op,n,open+1,close,i+1);
        }
        if(open>close)
        {
            op[i]=')';
            solve(op,n,open,close+1,i+1);
        }
}
int main()
{
    int n;
    cin>>n;
    char op[50];
    solve(op,n,0,0,0);
    return 0;
}