#include <iostream>
#include "IntArr.h"
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    setlocale(0,"");
    IntArray array;
    cout<<"������� ����� �������: ";
    cin>>array.size;
    cout<<endl;
    array.data=new int[array.size];
    cout<<"��� ������: ";
    createArr(array);
    write(array);
    cout<<endl;
    cout<<"����������: ";
    sort(array);
    write(array);
    cout<<endl;
    cout<<"��������� �������� �� �������\n";
    getItem(array);
    cout<<"��������� �������� �� �������\n";
    editItem(array);
    write(array);
    cout<<endl;
    remove(array);
    int n;
    cout<<"������� ����� ������?\n��-1 ���-0\n";
    cin>>n;
    if(n==1){
    array=newArray(array);
    }
    return 0;
}
