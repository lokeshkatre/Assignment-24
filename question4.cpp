#include<iostream>
using namespace std;
int fact(int x)
{
    if(x==0)
    return 1;
    int factorial=1;
    while(x>0)
    {
        factorial=factorial*x;
        x--;
    }
    return factorial;
}
int comb(int x,int y){
    return fact(x)/(fact(y)*fact(x-y));
}
void PascalTriangle(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int k=n-i-2;k>=0;k--)
            cout<<" ";
        for(int j=0;j<=i;j++)
        {
            cout<<comb(i,j)<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter no. of lines in pascal triangle:";
    cin>>n;
    PascalTriangle(n);
    return 0;

}