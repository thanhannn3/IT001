
#include <iostream>
#include <stdlib.h> 
#include <time.h>
#define MAX 100
using namespace std;
void nhapmang1chieu(int a[], int& n)
{
    cout << "moi ban nhap so luong phan tu:  ";
    cin >> n;
}
void phatsinhmang1chieu(int a[], int& n)
{
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 50 + 1;
    }
}
void xuatmang1chieu(int a[], int n)
{
    cout << "mang mot chieu la: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }
}
// câu a
int tinhtong(int a[], int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s = s + a[i];
    }
    return s;
}
// câu b
int demsolanxuathien(int a[], int n, int x)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            dem++;
        }
    }
    return dem;
}
void dem(int a[], int n)
{
    int k;
    cout << "nhap phan tu muon tim: ";
    cin >> k;
    cout << "so lan xuat hien cua " << k << " la: " << demsolanxuathien(a, n, k);
}
// câu c
int phantuchan(int a)
{
    if (a % 2 == 0)
    {
        return 1;
    }
    return 0;
}
void xuatphantuchan(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (phantuchan(a[i]) == 1 && a[i] < 20)
        {
            cout << " " << a[i];
        }
    }
}
// câu d
int vtcuammin(int a[], int n)
{
    int p;
    int min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            p = i;
        }
    }
    return p;
}
// câu e
void daonguoc(int a[], int n)
{
    for (int i = 0; i <= n / 2; i++)
    {
        int temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
    cout << " mang dao nguoc la: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }
}
int main()
{
    int a[MAX];
    int n;
    phatsinhmang1chieu(a, n);
    xuatmang1chieu(a, n);
    cout << endl;
    cout << "tong la: " << tinhtong(a, n) << endl;
    dem(a, n);
    cout << endl;
    cout << "Phan tu chan nho hon 20 la: ";
    xuatphantuchan(a, n);
    cout << endl;
    cout << "vi tri cua phan tu nho nhat la: " << vtcuammin(a, n);
    cout << endl;
    daonguoc(a, n);
}
