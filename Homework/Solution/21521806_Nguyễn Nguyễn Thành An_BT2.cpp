
#include <iostream>
using namespace std;
struct phanso
{
    int tu;
    int mau;
};
// câu a
void nhap(phanso& x)
{
    cout << "moi ban nhap tu: ";
    cin >> x.tu;
    cout << "moi ban nhap mau: ";
    cin >> x.mau;
}
void xuat(phanso x)
{
    cout << x.tu << "/" << x.mau;
}
// câu b
int UCLN(int a, int b)
{
    int t = 0;
    while (b != 0)
    {
        t = b;
        b = a % b;
        a = t;
    }
    return a;
}
phanso rutgonphanso(phanso& a)
{
    phanso t;
    t.tu = a.tu / UCLN(a.tu, a.mau);
    t.mau = a.mau / UCLN(a.tu, a.mau);
    return t;
}
// câu c
phanso tong(phanso a, phanso b)
{
    phanso s;
    s.tu = a.tu * b.mau + b.tu * a.mau;
    s.mau = a.mau * b.mau;
    rutgonphanso(s);
    return s;
}
phanso hieu(phanso a, phanso b)
{
    phanso z;
    z.tu = a.tu * b.mau - b.tu * a.mau;
    z.mau = a.mau * b.mau;
    rutgonphanso(z);
    return z;
}
phanso tich(phanso a, phanso b)
{
    phanso o;
    o.tu = a.tu * b.tu;
    o.mau = a.mau * b.mau;
    rutgonphanso(o);
    return o;
}
phanso thuong(phanso a, phanso b)
{
    phanso p;
    p.tu = a.tu * b.mau;
    p.mau = a.mau * b.tu;
    rutgonphanso(p);
    return p;
}
void sosanh(phanso a, phanso b)
{
    phanso z;
    z.tu = a.tu * b.mau - b.tu * a.mau;
    z.mau = a.mau * b.mau;
    if (z.tu > 0)
    {
        cout << "phan so 1 lon hon phan so 2";
    }
    else
    {
        if (z.tu < 0)
        {
            cout << "phan so 1 nho hon phan so 2 ";
        }
        else cout << "phan so 1 bang phan so 2";
    }
}
int main()
{
    phanso x, y;
    nhap(x);
    cout << "phan so 1 la: ";
    xuat(x);
    cout << endl;
    phanso k;
    k = rutgonphanso(x);
    cout << "phan so 1 sau khi rut gon la: ";
    xuat(k);
    cout << endl;
    nhap(y);
    cout << "phan so 2 la: ";
    xuat(y);
    cout << endl;
    phanso l;
    l = rutgonphanso(y);
    cout << "phan so 2 sau khi rut gon la: ";
    xuat(l);
    cout << endl;
    phanso sum = tong(x, y);
    cout << "tong hai phan so la: ";
    xuat(sum);
    cout << endl;
    phanso hieups = hieu(x, y);
    cout << "hieu hai phan so la: ";
    xuat(hieups);
    cout << endl;
    phanso tichcuaps = tich(x, y);
    cout << "tich hai phan so la: ";
    xuat(tichcuaps);
    cout << endl;
    phanso thuongcuaps = thuong(x, y);
    cout << "thuong hai phan so la: ";
    xuat(thuongcuaps);
    cout << endl;
    sosanh(x, y);
}
