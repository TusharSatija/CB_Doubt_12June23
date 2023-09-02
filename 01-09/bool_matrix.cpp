#include<iostream>
using namespace std;
int main () {
	int M,N;
	cin>>M>>N;
	int arr[1000][1000];
	//input 2d array
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			cin>>arr[i][j];
		}
	}
	int row,col;
	//check which row or col is 1
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			if(arr[i][j]==1){
				row=i;
				col=j;
			}
		}
	}
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			if(i==row||j==col){
				arr[i][j]=1;
			}
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
