#include<iostream>
using namespace std;
int main()
{
    string s="abcd";
   for (int i = 0; i < s.size(); i++)
        for (int j = 1; j <= s.size() - i; j++)
            cout << s.substr(i, j) << endl;

    // cout<<s.substr(0,3);
    // cout<<endl;
    // cout<<s.substr(3);
    return 0;
}