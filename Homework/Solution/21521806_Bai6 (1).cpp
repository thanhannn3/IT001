
#include <iostream>
using namespace std;
void nhap(int& n)
{
    int a, b;
    cout << "moi ban nhap a: ";
    cin >> a;
    cout << "moi ban nhap b: ";
    cin >> b;
}
int nhanhaisobangdequy(int a,int b)
{
    if (b <= 1)
    {
        return a;
    }
    else return a + nhanhaisobangdequy(a, b - 1);
}
int main()
{
    int n;
    int a, b;
    nhap(n);
    cout << "Tich la: " << nhanhaisobangdequy(a,b);
}

