#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void outer_func();
void* inner_func(int);



int main()
{
    outer_func();//�������� ������� �������

}

void* inner_func(int a) {
    cout << "inner_func: a = " << a << endl;//������� ���������� �������������� ������ = 5
    a += 1;//����������� �������� ����������
     // if (a < 7) inner_func(a); //����������, ��� ���������� ��������� � ������ ������ ��� ��� ������ (���� ���� ��������, �. �. �������� ���� ����)
    cout << "inner_func: int the end a = " << a << endl;//������� �������� ������������ ���������� ���������� = 6
    cout << "*" << &a << " = " << a << endl;//������� ������, ������� ��������� �� ��������� ������������ ���������� ����������
    return &a;
}

void outer_func() {
    int a;//����� ���������� �
    int *inner_a;//����������, ����������� ����������
    a = 5;
    cout << "outer_func: a = " << a << endl; //������ �������������� �������� ���������� = 5
    inner_a = (int *) inner_func(a);//
    cout << "outer_func: in the end a = " << a << endl;//������� �������� ���������� �, ������� � ���� ����� = 5
    cout << "*" << inner_a << " = " << *inner_a << endl;//������ ��, ��� ��������� �� ��������� ���������� inner, ��� ��� ����� ���-�� ������, ������ ��� ������������ ������ ����� �������������
}

