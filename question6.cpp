#include<iostream>
using namespace std;
void swap(int &x,int &y)
{
    x=x+y;
    y=x-y;
    x=x-y;
}
int main()
{
    int n,m;
    cout<<"Enter numbers:"<<endl;
    cin>>n>>m;
    swap(n,m);
    cout<<"n="<<n<<" m="<<m<<endl;
    return 0;
}