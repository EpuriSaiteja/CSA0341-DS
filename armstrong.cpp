#include<iostream>
using namespace std;
int main()
{
	int n,rev=0,rem,temp;
	cout<<"enter n = ";
	cin>>n;
	temp=n;
	while(temp!=0)
	{
		rem = temp % 10;
		rev += rem * rem * rem;
		temp /= 10;
	}
	if(n == rev)
	cout<<n<<" is armstrong";
	else
	cout<<n<<" is not armstrong";
}



