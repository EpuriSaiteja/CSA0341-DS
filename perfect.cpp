#include<iostream>
using namespace std;
int main()
{
	int n,i,sum;
	cout<<"enter n =";
	cin>>n;
	for(i=1;i<=n;i++){
		if(n%i==0){
			sum=sum+i;
			cout<<"perfect";
		}
	else{
		cout<<"not perfect";
	}
	return 0;
}
}




