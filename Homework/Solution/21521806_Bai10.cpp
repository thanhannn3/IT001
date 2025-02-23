
#include <iostream>
using namespace std;
int main()
{
    double a, b, c;
    cout << "moi ban nhap vao so nguyen duong a: ";
    cin >> a;
    cout << "moi ban nhap vao so nguyen duong b: ";
    cin >> b;
    cout << "moi ban nhap vao so nguyen duong c: ";
    cin >> c;
    if (a + b > c && a + c > b && b + c > a)
    {
        if ((a != c && a == b || b==c) || (a != b && a == c || b == c) || (b != c && a == b || a == c))
        {
            if (a==b && b==c && c==a)
            {
                cout << "tam giac deu";
            }
            else
                cout << "tam giac can";
        }
        else
        {
            if (a* a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
            {
                cout << "tam giac vuong";
            }
            else
            {
                cout << "tam giac binh thuong";
            }
        }
    }
    else
    {
        cout << "do khong phai la ba canh cua mot tam giac";
    }
}

