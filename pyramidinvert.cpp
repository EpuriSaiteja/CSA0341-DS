#include<iostream>
using namespace std;
int main()
{
    int i, space, j,row;
    cout<<"enter n = ";
    cin>>row;
    for(i=row; i>=1; i--)
    {
        for(space=6; space>i; space--)
            cout<<" ";
        for(j=0; j<i; j++)
            cout<<"* ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
