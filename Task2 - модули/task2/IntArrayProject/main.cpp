#include "IntArr.h"
#include<iostream>
#include<cstdlib>
#include<ctime>
#include <cstring>

using namespace std;

int main()
{
    setlocale(0,"");
    int size;
    cout<<"������� ����� �������: ";
    cin>>size;
    cout<<endl;
    IntArray array=CreateArray(size);
    for (int i=0;i<size;++i) {
        setItem(array,i,rand()%10+1);
    }
    cout<<"��� ������: ";
    write(array);
    sort(array);
    cout<<"����������: ";
    write(array);

    cout<<"��������� �������� �� �������:\n";
    cout<<"������� ������: ";
    int index=1;
    int result=0;
    cin>>index;
    getItem(array,index,result);
    cout<<"��������: "<<result<<endl;
    cout<<"�������� �������� ������-������ ��������?\n��-1 ���-0\n";
    int n1;
    cin>>n1;
    if(n1==1){
    cout << "������� ������" <<endl;
            int index;
            cin>>index;
            cout<<"������� ����� ��������"<<endl;
            int value;
            cin>>value;
            put(array, index, value);
            cout<<"��� ������: ";
            write(array);
    }
    remove(array);
    int n;
    cout<<"������� ����� ������?\n��-1 ���-0\n";
    cin>>n;
    if(n==1){
    array=newArray(array);
    }
 return 0;
}
