// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// bool comp(string s,string t)
// {
//     if(s.find(t)==0 or t.find(s)==0)
//     {
//         return s.length()>t.length();
//     }
//     return s<t;
// }
// int main()
// {

//     // string s,t;
//     // cin>>s>>t;
//     // cout<<s.find(t);

//     int n;
//     cin>>n;
//     string s[10];
//     for(int i=0;i<n;i++)
//     {
//         cin>>s[i];
//     }
//     sort(s,s+n,comp);
//     for( int i=0;i<n;i++)
//     {
//         cout<<s[i]<<"  ";
//     }
//     return 0;
// }

#include<iostream>
#include<string.h>
using namespace std;
void dictonary(string st,string ans,string str){
	//base
	if(st.length()==0){
		//cout<<ans<<endl;
		if(ans>str&& ans!=str){
			cout<<ans<<endl;
		}
		return;
	}
	//rec
	for(int i=0;i<st.length();i++){
		char ch=st[i];
		string ros=st.substr(0,i)+st.substr(i+1);
		dictonary(ros,ans+ch,str);
	}
}
int main(){
	string st;
	getline(cin,st);
	dictonary(st," ",st);


	return 0;
}
