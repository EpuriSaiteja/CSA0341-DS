#include<iostream>
using namespace std;
int main()
{
 int a,b,sum,mul,sub,div,mod;
 cout<<"a = ";
 cin>>a;
 cout<<"b = ";
 cin>>b;
 sum = a+b;
 mul =a*b;
 sub=a-b;
 div=a/b;
 double floatdiv = static_cast<double>(a) / b;
 mod=a%b;
 cout<<sum<< endl;
 cout<<mul<< endl;
 cout<<sub<< endl;
 cout<<floatdiv<< endl;
 cout<<mod<< endl;
 return 0;
}
 
