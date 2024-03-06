#include<iostream>
using namespace std;
int main(){
	int i,j,k,row;
	cout<<"rows = ";
	cin>>row;
	for(i=0;i<=row;i++){
		for(j=6;j>i;j--)
		cout<<" ";
		for(k=0;k<i;k++)
		cout<<"*";
		cout<<endl;
	}
	cout<<endl;
}


