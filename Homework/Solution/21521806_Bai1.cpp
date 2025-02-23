
#include <iostream>
using namespace std;
void nhap(int &n)
{
    cout << "moi ban nhap n: ";
    cin >> n;
}
// cau a
int daonguoc(int n)
{
    int s = 0;
    int k;
    do
    {
        k = n % 10;
        n = n / 10;
        s = s * 10 + k;
    } while (n != 0);
    return s;
    
}
// cau b
int Sochinhphuong(int n)
{
    if (int(sqrt(n)) * int(sqrt(n)) == n)
    {
        return 1;
    }
    else return 0;
}
void kiemtrasochinhphuong(int n)
{
    if (Sochinhphuong(n) == 1)
    {
        cout << "Day la so chinh phuong ";
    }
    else cout << "Day khong phai la so chinh phuong";
}
// cau c
int Songuyento(int n)
{
    int kiemtra = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 1;
        }
        else return 0;
    }
}
void Kiemtrasonguyento(int n)
{
    if (Songuyento(n) == 1)
    {
        cout << "Day khong phai la so nguyen to";
    }
    else cout << "Day la so nguyen to ";
}
// cau  d
int Sochanle(int n)
{
    if (n % 2 == 0)
    {
        return 1;
    }
    else return 0;
}
int Tongchusole(int  n)
{
    int sum = 0;
    int k;
    do
    {
        k = n % 10;
        n = n / 10;
        if (Sochanle(k) == 0)
        {
            sum = sum + k;
        }
    } while (n != 0);
    return sum;
}
//cau e 
int Tongsonguyento(int n)
{
    int tinh = 0;
    for (int i = 0; i < n; i++)
    {
        if (Songuyento(i) == 1)
        {
            tinh = tinh + i;
        }
    }
    return  tinh;
}
//cau f
int Tongsochinhphuong(int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (Sochinhphuong(i) == 1)
        {
            sum = sum + i;
        }
    }
    return  sum;
}
// cau g
int Uocso(int a, int b)
{
    if (a % b == 0)
    {
        return 1;
    }
    else return 0;
}
int Tonguocso(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (Uocso(n, i) == 1)
        {
            sum = sum + 1;
        }
    }
    return sum;
}
int main()
{
    int n;
    nhap(n);
    cout << "So dao nguoc la: " << daonguoc(n) << endl;
    kiemtrasochinhphuong(n);
    cout << endl;
    Kiemtrasonguyento(n);
    cout << endl;
    cout << "Tong cac chu so le cua n la: " << Tonguocso(n) << endl;
    cout << "Tong cac so nguyen to nho hon n la: " << Tongsonguyento(n) << endl;
    cout << "Tong cac so chinh phuong nho hon n la: " << Tongsochinhphuong(n) << endl;
    cout << "Tong cac uoc so cua n la: " << Tonguocso(n) << endl;
    return 0;
}
