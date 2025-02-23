
#include <iostream>
using namespace std;
int main()
{
	char n;
	cout << "moi ban nhap mot chu cai: ";
	cin >> n;
	if (65 <= n && n <= 90)
	{
		n = n + 32;
		(char)n;
		cout << "chu cai sau khi doi la: " << n;
	}
	else
	{
		if (97 <= n && n <= 122)
		{
			n = n - 32;
			(char)n;
			cout << "chu cai sau khi doi la: " << n;
		}
		else
		{
			cout << "khong doi duoc ";
		}
	}
}
