#include <iostream>
#include <cmath>
using namespace std;

void plusone(int a, int b){
	a=a+1;
	b=a+1;
	cout<<"����� ���������� ������� plusone �������� � � � ����������"<<endl;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    int a =0;
    int b =1; //����� ������� 2 ��������������������� ����������
    cout<<"��������� ��������:";
    cout<<"a ="<<a<<endl;
    cout<<"b ="<<b<<endl;
    plusone(a,b);
    cout<<"�������� ��������:"<<endl;
    cout<<"a ="<<a<<endl;
    cout<<"b ="<<b<<" ";

}
