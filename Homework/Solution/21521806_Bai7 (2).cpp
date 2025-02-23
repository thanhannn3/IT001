
#include <iostream>
using namespace std;
void nhap(int& n)
{
    cout << "moi ban nhap n: ";
    cin >> n;
}
int dequy(int n)
{
    if (n > 0)
    {
        return n * dequy(n - 1);
    }
}
int main()
{
    int n;
    nhap(n);
    cout << "giai thua la: " << dequy(n);
}

