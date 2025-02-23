
#include <iostream>
using namespace std;
void nhap(int& n)
{
    cout << "moi ban nhap n: ";
    cin >> n;
}
int fibonacci(int n)
{
    if (n == 0 || n == 1||n==2)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main()
{
    int n;
    nhap(n);
    cout << "phan tu day fibonacci la:" ;
    for (int i = 0; i <= n; i++)
    {
        cout << " " << fibonacci(i);
    }
}

