#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void* inner_func(int);
void outer_func();

//void outer_static();
//void inner_static();

int main()
{
    outer_func();
    //outer_static();
}

void* inner_func(int a) {
    cout << "inner_func: a = " << a << endl;//������ ���������� ������
    a += 1;//����������, ��� ���������� ���������� � �� �������� � ��������
//    if (a < 7) inner_func(a); //����������, ��� ���������� ��������� � ������ ������ ��� ��� ������ (���� ���� ��������, �. �. �������� ���� ����)
    cout << "inner_func: int the end a = " << a << endl;//������� �������� ���������
    cout << "*" << &a << " = " << a << endl;//������� ������, ������� ��������� �� ���������
    return &a;
}

void outer_func() {
    int a;//����� ���������� �
    int *inner_a;
    a = 5;
    cout << "outer_func: a = " << a << endl; //������ �������������� �������� ����������
    inner_a = (int *) inner_func(a);//������ ���������� �� ���������� �������
    cout << "outer_func: in the end a = " << a << endl;//������ ��, ��� ��� ������� ������� inner
    cout << "*" << inner_a << " = " << *inner_a << endl;//������ ��, ��� ��������� �� ��������� ���������� inner
}


//static int static_a;

//void outer_static()
//{
  //  static_a = 10;
    //cout << "*" << &static_a << " = " << static_a << endl;
    //inner_static();
    //cout << "*" << &static_a << " = " << static_a << endl;
//}

//void inner_static()
//{
  //  static_a += 1;
    //cout << "*" << &static_a << " = " << static_a << endl;
//}

