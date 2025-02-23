
#include <iostream>
#include <time.h>
#include <stdlib.h>
#define MAX 100
using namespace std;
// câu a
void phatsinhmang1chieu(int a[], int& n)
{
    cout << "moi ban nhap so luong phan tu: ";
    cin >> n;
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 11 + 10;
    }
}
// câu b
void xuatmang1chieu(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
// câu c
int timmax(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}
// câu d
int vitrimin(int a[], int n)
{
    int min = a[0];
    int vt;
    for (int i = 1; i < n; i++)
    {
        if (min > a[i])
        {
            vt = i;
        }
    }
    return vt;
}
//câu e
int kiemtratangdan(int a[], int n)
{
    int dem = 0;
    int flag=1;
    for (int i= 0; i < n ; i++)
    {
        if (a[i] > a[i + 1])
        {
            flag = 0;
        }
    }
    return flag;
}
void kiemtra(int a[], int n)
{
    
    int flag = kiemtratangdan(a, n);
    if (flag == 0)
    {
        cout << "mang co tang dan ";
    }
    else cout << "mang khong tang dan ";

}
// câu f
int songuyento(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}
int sntcuoicung(int a[], int n)
{
    for (int i = n - 1; i >= 0; i--)
        if (songuyento(a[i]) == 1)
            return a[i];
    return -1;
}
int main()
{
    int a[MAX], n;
    phatsinhmang1chieu(a, n);
    cout << "cac phan tu trong mang la: ";
    xuatmang1chieu(a, n);
    cout << endl;
    cout << "gia tri lon nhat trong mang la: " << timmax(a, n) << endl;
    cout << "vi tri phan tu nho nhat trong mang la: " << vitrimin(a, n) << endl;
    kiemtra(a, n);
    cout << "so nguyen to cuoi cung trong mang la: " << sntcuoicung(a, n);
}

