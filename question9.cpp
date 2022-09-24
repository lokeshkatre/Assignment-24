#include<iostream>
using namespace std;
float max(float x,float y)
{
    return (x>y)?x:y;
}
int max(int x,int y)
{
    return (x>y)?x:y;
}
int main()
{
    float x,y;
    int a,b;
    cout<<"Enter real numbers:"<<endl;
    cin>>x>>y;
    cout<<"Enter integer numbers:"<<endl;
    cin>>a>>b;
    cout<<max(x,y)<<" is maximum"<<endl;
    cout<<max(a,b)<<" is maximum"<<endl;
   
}