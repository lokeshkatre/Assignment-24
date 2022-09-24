#include<iostream>
using namespace std;
void Power(int a,int b)
{
    int exp=1;
    for(int i=0;i<b;i++)
    {
        exp=exp*a;
    }
    cout<<a<<" to the power "<<b<<" is "<<exp;
}
int main()
{
    int x,y;
    cout<<"Enter x:";
    cin>>x;
    cout<<"Enter y:";
    cin>>y;
    Power(x,y);
    return 0;
}