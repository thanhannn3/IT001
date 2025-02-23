#include<iostream>
#define MAX 50
using namespace std;
// câu a
void Nhapchuoi(char a[])
{
	cout << "Nhap vao chuoi ky tu: ";
	cin.getline(a, MAX);
}
void xuatchuoi(char a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i];
	}	
}
// câu b
void kituinhoa(char a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] >= 'A' && a[i] <= 'Z')
		{
			cout << a[i] << " ";
		}
	}
}
// câu c
int dodaichuoi(char a[])
{
	int i = 0;
	while (a[i] != 0)
	{
		i++;
	}
	return i;
}
void daochuoi(char a[], int n)
{
	cout << "Chuoi dao nguoc la: ";
	for (int i = n - 1; i >= 0; i--)
	{
		cout << a[i];
	}
}
// câu d
void taobienx(char a[], char x[], int n)
{
	for (int i = 0; i < n; i++)
	{
		x[i] = a[i];
	}		
}
void vietchanhoalethuong(char x[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			if (x[i] >= 'a' && x[i] <= 'z') x[i] -= 32;
		}
		else if (x[i] >= 'A' && x[i] <= 'Z') x[i] += 32;
	}
}
int main()
{
	char a[MAX];
	char x[MAX];
	Nhapchuoi(a);
	int n = dodaichuoi(a);
	cout << "Chuoi vua nhap la: ";
	xuatchuoi(a, n);
	cout << endl;
	cout << "Ki tu in hoa la: ";
	kituinhoa(a, n);
	cout << endl;
	daochuoi(a, n);
	cout << endl;
	taobienx(a, x, n);
	vietchanhoalethuong(x, n);
	cout << "chuoi co dang vi tri chan viet hoa vi tri le viet thuong la: ";
	xuatchuoi(x, n);
	return 0;
}