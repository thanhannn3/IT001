
#include <iostream>
using namespace std;
// câu a
void nhap(int *&a, int& n)
{
    cout << "nhap so uong phan tu: ";
    cin >> n;
    a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> *(a+i);
    }
}
void xuat(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << *(a+i) << " ";
    }
}
// câu b
void tinhtong(int* a, int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s = s + *(a + i);
    }
    cout << "tong cua cac phan tu la: " << s;
}
// câu c
void hoanvi(int& a,int &n)
{
    int z = a;
    a = n;
    n = z;
}
void sapxep(int* a, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (*(a + i) < *(a + j))
            {
                hoanvi(*(a + i), *(a + j));
            }
        }
    }
}
int main()
{
    int* a;
    int n;
    nhap(a, n);
    cout << "cac phan  tu vua nhap la: ";
    xuat(a, n);
    cout << endl;
    tinhtong(a, n);
    cout << endl;
    cout << "mang giam dan la: ";
    sapxep(a, n);
    xuat(a, n);
}