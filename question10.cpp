#include<iostream>
using namespace std;
int add(int a,int b)
{
    return a+b;
}
float add(float x,float y)
{
    return x+y;
}
int main()
{
    float x,y;
    int a,b;
    cout<<"enter interger numbers:"<<endl;
    cin>>a>>b;
    cout<<"Enter real numbers:"<<endl;
    cin>>x>>y;

    cout<<"sum of integer numbers is "<<add(a,b)<<endl;
    cout<<"Sum of real numbers is "<<add(x,y)<<endl;
    return 0;
}