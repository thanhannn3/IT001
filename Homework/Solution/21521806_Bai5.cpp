
#include <iostream>
using namespace std;
int main()
{
    double a, b, c, delta;
    cout << "moi ban nhap a: ";
    cin >> a;
    cout << "moi ban nhap b: ";
    cin >> b;
    cout << "moi ban nhap c: ";
    cin >> c;
    if (a==0)
    {
        if (b == 0) 
        {
            if (c == 0)
            {
                cout << "vo so nghiem";
            }
            else
            {
                cout << "vo nghiem";
            }
        }
        else
        {
            cout << "nghiem la: " << -c / b;
        }
    }
    else
    {
        delta = b * b - 4 * a * c;
        if (delta == 0)
        {
            cout << "nghiem kep la: " << -b / (2 * a); 
        }
        if (delta > 0)
        {
           cout << "nghiem thu nhat la: " << (-b + sqrt(delta)) / (2 * a);
           cout << "nghiem thu hai la : " << (-b - sqrt(delta)) / (2 * a);
        }
        else
        {
            cout << "vo nghiem ";
        }
    }
}
