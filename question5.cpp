#include<iostream>
#include<cmath>
using namespace std;
int perfectsqr(int x)
{
   int s=sqrt(x);
   return (s*s==x);
}
void fibonacci(int n)
{
    if(perfectsqr(5*n*n-4) || perfectsqr(5*n*n+4))
    {
        cout<<"Yes,it is term of fibonacci series"<<endl;
    }
    else
    cout<<"No, it is not term of fibonacci"<<endl;
}
int main()
{
    int n;
    cout<<"Enter number:";
    cin>>n;
    fibonacci(n);
    return 0;
}