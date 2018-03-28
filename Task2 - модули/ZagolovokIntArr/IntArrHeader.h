// ��� ���� ��� ���� �� �����
#ifndef INTARR_H_INCLUDED
#define INTARR_H_INCLUDED

/// ��� ������ �������
struct IntArray
{
    int* data;
    int* size;
};

/// ������ ������ ������ size � ���������� ���
IntArray CreateArray(int size);

/// ������� ���������� ������ (����������� ������)
void DeleteArray(IntArray array);

/*� ���������� result ������������ �������� �������� � �������� index ������� array
���������� false ��� ������ �� ������� �������*/
bool Get (IntArray array, int index, int& result);

/*�������� � �������� index array ������������� �������� value
���������� false ��� ������ �� ������� �������*/
bool Set (IntArray array, int index, int value);


#endif // INTARR_H_INCLUDED

