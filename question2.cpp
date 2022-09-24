#include<iostream>
using namespace std;
void Max(int num)
{
    int max=0;
while(num>0)
    {
        int r=num%10;
        if(r>max)
        max=r;
        num=num/10;
    }
    cout<<"Max digit in number is "<<max;
}
int main()
{
    int num;
    cout<<"Enter number:";
    cin>>num;
    Max(num);
    return 0;
}