
#include <iostream>
#define MAX 50
using namespace std;
void nhapmatran(int a[MAX][MAX], int& m, int& n)
{
    cout << "moi ban nhap so dong: ";
    cin >> m;
    cout << "moi ban nhap so cot: ";
    cin >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "nhap cho dong " << i << " cot " << j << " : ";
            cin >> a[i][j];
        }
    }
    cout << endl;
}
// câu a
void xuatmatran(int a[MAX][MAX], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}
// câu b
int timmax(int a[MAX][MAX], int m, int n)
{
    int max = a[0][0];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (max < a[i][j])
            {
                max = a[i][j];
            }
        }
    }
    return max;
}
// câu c
int timmin(int a[MAX][MAX], int m, int n)
{
    int min = a[0][0];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (min > a[i][j])
            {
                min = a[i][j];
            }
        }
    }
    return min;
}
// câu d
void xuatranuatrenduongcheochinh(int a[MAX][MAX], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
    }
}
// câu e
void mincuadong(int a[MAX][MAX], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        int min = a[i][0];
        for (int j = 0; j < n; j++)
        {
            if (min > a[i][j])
            {
                min = a[i][j];
            }
        }
        cout << "gia tri nho nhat tren dong " << i << " la: " << min << endl;
    }
}
// câu f
void maxcuacot(int a[MAX][MAX], int m, int n)
{
    for (int j = 0; j < n; j++)
    {
        int max = a[0][j];
        for (int i = 0; i < m; i++)
        {
            if (max < a[i][j])
            {
                max = a[i][j];
            }
        }
        cout << "gia tri lon nhat tren cot " << j << " la: " << max << endl;
    }
}
// câu g
void matranmoi(int b[MAX][MAX], int& m, int& n)
{
    cout << "moi ban nhap so dong: ";
    cin >> m;
    cout << "moi ban nhap so cot: ";
    cin >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "nhap cho dong " << i << " cot " << j << " : ";
            cin >> b[i][j];
        }
    }
    cout << endl;
}
void xuatmatranmoi(int b[MAX][MAX], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << b[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}
void tong2matran(int a[MAX][MAX], int b[MAX][MAX], int c[MAX][MAX], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}
int main()
{
    int a[MAX][MAX], b[MAX][MAX],c[MAX][MAX], m, n;
    nhapmatran(a, m, n);
    cout << "ma tran la: " << endl;
    xuatmatran(a, m, n);
    cout << endl;
    cout << "cac phan tu nam tren duong cheo chinh la: ";
    xuatranuatrenduongcheochinh(a, m, n);
    cout << endl;
    cout << "phan tu lon nhat la: " << timmax(a, m, n);
    cout << endl;
    cout << "phan tu nho nhat la: " << timmin(a, m, n);
    cout << endl;
    mincuadong(a, m, n);
    maxcuacot(a, m, n);
    cout << "moi ban nhap them mot ma tran moi " << endl;
    matranmoi(b, m, n);
    cout << "ma tran la: " << endl;
    xuatmatranmoi(b, m, n);
    tong2matran(a,b,c, m, n);
    cout << "tong hai ma tran la: " << endl;
    xuatmatran(c, m, n);
}
