#include <iostream>
#include <cmath>

using namespace std;

int main()
{
setlocale(LC_ALL, "Russian");
int *v = new int;                 // ����������� �������� ������������� ����������.
*v = 5;                           // �������� � ���������� �������� ��������.
int *a = v;                       // 'a' ������ ��������� �� �� �� ����� ���������� ������, ��� � 'v'.

cout << " ������ ���� ";
cout << " " << endl;
cout << " " << *v << endl;
cout << " " << *a << endl;
cout << " " << endl;

delete v;                        // ����������� ������, ���������� ��� ����������.
v = 0;
cout << " ������ ���� ";
cout << " " << endl;
cout << " " << *a << endl;

return 0;
}

