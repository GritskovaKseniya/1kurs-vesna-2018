#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

typedef union { //�������� ����������� � ����� �����������: �������� �������������, ����������� �������������
    int znakovoe;
    unsigned int bezznakovoe;
    struct { //�������� ��������� � ������������ ��������������� �����������
        unsigned char a;
        unsigned char b;
        unsigned char c;
        unsigned char d;
    } bytes;//�������� ���������
} union1;//������ �����������


int main()
{
    union1 test; //�������� ����������
    test.bezznakovoe = 4*1000*1000*1000;
    cout << "test.bezznakovoe = " << test.bezznakovoe << endl;
    cout << "test.znakovoe = " << test.znakovoe << endl;
    cout << "test.bezznakovoe = " << test.bezznakovoe << endl;

    cout.unsetf(ios::dec);//����� ������� � 10������ ������� ���������
    cout.setf(ios::hex);//����� ������� � 16������ ������� ���������
    cout << (unsigned int) test.bytes.d << " " << (unsigned int) test.bytes.c << " " << (unsigned int) test.bytes.b << " " << (unsigned int) test.bytes.a << endl;
 //����� ����������� ���������� int
}
/* �� ������� ����������� � ����������� �������������
� �������� �������������, ����� ��������� ��� ���� ����� ��������������� �� ������ � ���, � �������� ��� ��� � ����������������� ������� ���������*/
