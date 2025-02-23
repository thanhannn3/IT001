
#include <iostream>
using namespace std;

void nhap(int& n)
{
    cout << "moi ban nhap n: ";
    cin >> n;
}
int caua(int n)
{
    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        s = s + i;
    }
    return s;
    cout << " s = " << s;
}
int caub(int n)
{
    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        s = s + (i * 10 + 2);
    }
    return s;
    cout << " s = " << s;
}
float cauc(int n)
{
    float s = 0;
    for (int i = 1; i <= n; i++)
    {
        s = s + 1.0/ i;
    }
    return s;
    cout << " s = " << s;
}
int caud(int n)
{
    int s = 0;
    int k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            k = k * j;
        }
        s = s + k;
        k = 1;
    }
    return s;
    cout << " s = " << s;
}
int caue(int n)
{
    if (n == 1)
    {
        return n;
    }
    else return n * caue(n - 1);
}
int main()
{
    int n;
    nhap(n);
    cout << " cau a la: " << caua(n) << endl;
    cout << " cau b la: " << caub(n) << endl;
    cout << " cau c la: " << cauc(n) << endl;
    cout << " cau d la: " << caud(n) << endl;
    cout << " cau e la: " << caue(n) << endl;
    return 0;
}
