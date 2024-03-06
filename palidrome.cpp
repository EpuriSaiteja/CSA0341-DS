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
		rev = rev *10 +rem;
		temp /= 10;
	}
	if(n == rev)
	cout<<n<<" is a palidrome";
	else
	cout<<n<<" is not a palidrome";
}

	

