#include<iostream>
using namespace std;
int main()
{
 double a,b,sum,mul,sub,div;
 cout<<"a = ";
 cin>>a;
 cout<<"b = ";
 cin>>b;
 sum = a+b;
  double floatsum = static_cast<double>(a) + b;
 mul =a*b;
  double floatmul = static_cast<double>(a) * b;
 sub=a-b;
  double floatsub = static_cast<double>(a) - b;
 div=a/b;
 double floatdiv = static_cast<double>(a) / b;
 cout<<floatsum<< endl;
 cout<<floatmul<< endl;
 cout<<floatsub<< endl;
 cout<<floatdiv<< endl;
 return 0;
}
 
