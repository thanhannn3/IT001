#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
void nhap(int& hang, int& cot)
{
    cout << "moi ban nhap so hang ";
    cin >> hang;
    cout << "moi ban nhap so cot ";
    cin >> cot;
}
// câu a
void phatsinh(int x[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            x[i][j] = 10 + rand() % 10 + 1;
        }
    }
}
// câu b
void xuatmatran(int x[][100], int m, int n)
{
    cout << "mang sau khi nhap la\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << x[i][j] << "\t";
        }
        cout << endl;
    }
}
// câu c
int tongduongcheochinh(int x[][100], int m, int n)
{
    int s = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                s = s + x[i][j];
            }
        }
    }
    return s;
}
// câu d
int tongptnuaduongcheochinh(int x[][100], int m, int n)
{
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < j)
            {
                sum = sum + x[i][j];
            }
        }
    }
    return sum;
}
int main()
{
    int m, n;
    int x[][100];
    nhap(m, n);
    phatsinh(x, m, n);
    xuatmatran(x, m, n);
    cout << "tong duong cheo chinh la " << tongduongcheochinh(x, m, n) << endl;
    cout << "tong phan tu nua duong cheo chinh la " << tongptnuaduongcheochinh(x, m, n) << endl;
}