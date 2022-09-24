#include <iostream>
using namespace std;
void Prime(int n)
{
    int flag = 0;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (n == 2 || n == 3)
        flag = 0;
    if (n == 1)
        flag = 1;
    if (flag == 1)
        cout << n << " is not a prime number";
    else
        cout << n << " is prime number";
}
int main()
{
    int n;
    cout << "Enter number:";
    cin >> n;
    Prime(n);
    return 0;
}