#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,m;
	cout<<"Enter the Num : ";
	cin>>n;
	while(n>0)
	{
		m=n%10;
		sum=sum+m;
		n/=10;
	}
	cout<<"SUM OF DIGITS IS : "<<sum<<endl;
	return 0;
}
