#include <iostream>

using namespace std;

void setPointer (int a){
    int* pa=&a;
    cout<<"����� ����� ���������� k: "<<pa<<endl;
    cout<<"a(����� k)= "<<a<<endl;
}

int main()
{
    setlocale(0, "");
    int k(9);
    int* pk=&k;
    cout<<"����� ���������� k: "<<pk<<endl;
    setPointer(k);// � ���������� a ���������� ���������� k
    cout<<"k= "<<k<<endl;
    return 0;
}
