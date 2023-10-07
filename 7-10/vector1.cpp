#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // char ch[100];
    //vector of char
    // vector<char> ch(100);

    // int arr[100];
    vector<int> arr;
    arr.push_back(100);
    cout<<"size of vector"<<arr.size();
    cout<<endl;
    cout<<"capacity of vector"<<arr.capacity();
    arr.push_back(12);
    arr.push_back(100);
    arr.pop_back();
    cout<<endl;
    cout<<"size of vector"<<arr.size();
    cout<<endl;
    cout<<"capacity of vector"<<arr.capacity();
    cout<<endl;
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }




    

    return 0;
}