#include <iostream>
#include "IntArr.h"
#include <cstdlib>
using namespace std;


///�������� ������
 int createArr(IntArray array){

     for (int i = 0; i <array.size; ++i)
    {
         *(array.data+i)=rand() % (9)+ 1;
    }
    return 0;
}

///������ �� �����
void write(IntArray array){

    for (int i = 0; i <array.size; ++i)
    {
         cout<<*(array.data+i)<<" ";

    }
}


///�������� ������
int sort(IntArray array){

  for (int i=array.size-1; i>=0; i--)
  {
    for (int j=0; j<i; j++)
    {
      if (*(array.data+j)>*(array.data+j+1))
      {
        int tmp = *(array.data+j);
        *(array.data+j) = *(array.data+j+1);
        *(array.data+j+1) = tmp;
      }
    }
  }
}


///��������� ��������
int getItem(IntArray array){
    int index;
    cout<<"������� ������ ��������"<<endl;
    cin>>index;
    if(index<=array.size && index>=0)
    {
        cout<<"�������: "<<*(array.data+index)<<endl;
    }
    else
    {
        cout<<"�������� � ����� �������� ���"<<endl;

    }


}


///��������� ��������
int editItem(IntArray array){
     int index;
    cout<<"������� ������ ��������: ";
    cin>>index;

    if(index<=array.size && index>=0)
    {
        int value;
       cout<<"������� ��������"<<endl;
       cin>>value;

        *(array.data+index)=value;
    }
    else
    {
        cout<<"�������� � ����� �������� ���"<<endl;

    }

}
///������� ������
void remove (IntArray array){
    array.size = 0;
    free(array.data);
}

IntArray newArray (IntArray array) {
    cout<<"������� ����� �������: ";
    cin>>array.size;
    cout<<endl;
    array.data=new int[array.size];
    cout<<"��� ������: ";
    createArr(array);
    write(array);
    cout<<endl;
    }

