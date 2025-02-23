
#include <iostream>
using namespace std;
int main()
{
    double a,b,x;
    cout << "moi ban nhap a: ";
    cin >> a;
    cout << "moi ban nhap b: ";
    cin >> b;
    if (a == 0) 
    {
        if (b == 0) 
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
        cout << " nghiem la " << -b / a;
    }
}
