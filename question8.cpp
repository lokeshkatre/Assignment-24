#include<iostream>
using namespace std;
float area(int r)
{
    return 3.14*r*r;
}
int area(int x, int y)
{
    return x*y;
}
float area(float b,float h)
{
    return (h*b)/2;
}
int main()
{
    int x,y;
    float h,b;
    int r;
    cout<<"Enter radius of circle:";
    cin>>r;
    cout<<"Enter lenght and breadth of rectangle:";
    cin>>x>>y;
    cout<<"Enter base and height of triangle:";
    cin>>b>>h;
    
    cout<<"Area of circle is "<<area(r)<<endl;
    cout<<"Area of rectangle is "<<area(x,y)<<endl;
    cout<<"Area of triangle is "<<area(b,h)<<endl;
    
    return 0;
}