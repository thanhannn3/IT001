
#include <iostream>
using namespace std;
struct sophuc
{
    double thuc,ao;
};
// câu a
void nhap(sophuc &sp)
{
    cout << "moi ban nhap phan thuc: ";
    cin >> sp.thuc;
    cout << "moi ban nhap phan ao: ";
    cin >> sp.ao;
}
void xuat(sophuc sp)
{
    cout << "so phuc la: " << sp.thuc << " + " << sp.ao << "i ";
}
// câu b
sophuc tong(sophuc a, sophuc b)
{
    sophuc s;
    s.thuc = a.thuc + b.thuc;
    s.ao = a.ao + b.ao;
    return s;
}
sophuc hieu(sophuc a, sophuc b)
{
    sophuc z;
    z.thuc = a.thuc - b.thuc;
    z.ao = a.ao - b.ao;
    return z;
}
sophuc tich(sophuc a, sophuc b)
{
    sophuc o;
    o.thuc = a.thuc * b.thuc - a.ao * b.ao;
    o.ao = a.thuc * b.ao + a.ao * b.thuc;
    return o;
}
sophuc thuong(sophuc a, sophuc b)
{
    sophuc c;
    c.thuc = (a.thuc * b.thuc + a.ao * b.ao) / (b.thuc * b.thuc + b.ao * b.ao);
    c.ao = (b.thuc * a.ao - b.ao * a.thuc) / (b.thuc * b.thuc + b.ao * b.ao);
    return c;
}
// câu c
float argument(sophuc a)
{
    return atan(a.ao / a.thuc);
}
float modul(sophuc a)
{
    return sqrt(a.thuc * a.thuc + a.ao * a.ao);
}
int main()
{
    sophuc a, b;
    cout << "so phuc thu 1 " << endl;
    nhap(a);
    xuat(a);
    cout << endl;
    cout << "so phuc thu 2 " << endl;
    nhap(b);
    xuat(b);
    cout << endl;
    sophuc sum = tong(a, b);
    cout << "tong hai so phuc la: ";
    xuat(sum);
    cout << endl;
    sophuc hieups = hieu(a, b);
    cout << "hieu hai so phuc la: ";
    xuat(hieups);
    cout << endl;
    sophuc tichcuaps = tich(a, b);
    cout << "tich hai so phuc la: ";
    xuat(tichcuaps);
    cout << endl;
    sophuc thuongcuaps = thuong(a, b);
    cout << "thuong hai so phuc la: ";
    xuat(thuongcuaps);
    cout << endl;
    cout << "argument cua so phuc a la: " << argument(a);
    cout << endl;
    cout << "modul cua so phuc a la: " << modul(a);
}
