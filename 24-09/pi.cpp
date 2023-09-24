#include<iostream>
#include<cstring>
using namespace std;
void replace_pie(string s,string op,int i){
	//badi problem n lines me pi replace kro
	//chotti problem n-1 lines me pi replace kkro
	//base case
	if(s[i]=='\0'){
        op[i]='\0';
		 cout<<op;
		return;
	}
	//recursive case 
    if(i<s.size()-2)
    {
        if(s[i]=='p' and s[i+1]=='i')
        {
            replace_pie(s,op+"3.14",i+2);
        }
    }
    else
        replace_pie(s,op+s[i],i+1);
} 

int main() {
	int n;
	cin>>n;
    //xpix
    //x3.14x
    while(n--)
    {
        string s;
        cin>>s;
	    replace_pie(s,"",0);
    }
	return 0;
}


