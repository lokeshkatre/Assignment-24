#include<iostream>
using namespace std;

int add(int x,int y,int z=0)
{
    return x+y+z;
}
int main()
{
    cout<<"Addition of 2 numbers "<<add(3,4)<<endl;
    cout<<"Addition of 3 numbers "<<add(5,4,5)<<endl;
    return 0;
    
}