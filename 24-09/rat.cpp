#include<iostream>
using namespace std;

bool flag=false;
void solve(char grid[][11],int n,int m,int i,int j,int op[][11])
{
    //base case 
    if(i==n-1  and j==m-1 and grid[i][j]=='O')
    {
        op[i][j]=1;
        for(int  i=0;i<n;i++)
        {
            for( int j=0;j<m;j++)
            {
                cout<<op[i][j]<<"  ";
            }
            cout<<endl;
        }
        flag=true;
        return;
    }
    if(i>n-1  or j>m-1 or i<0 or j<0)
    {
        return;
    }
    if(grid[i][j]=='X' or  op[i][j]==1)
    {
        return;
    }
    
    //recursive call

    op[i][j]=1;
    solve(grid,n,m,i+1,j,op);  //down
    solve(grid,n,m,i,j+1,op);  //right
    solve(grid,n,m,i-1,j,op);  //upward
    solve(grid,n,m,i,j-1,op);  //left

    op[i][j]=0; //backtracking ...

}
int main()
{
    int n,m;
    cin>>n>>m;
    int op[11][11]={0};
    char grid[11][11];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
        }
    }
    solve(grid,n,m,0,0,op);
    if(!flag)
    {
        cout<<"No Path found";
    }
    return 0;
}