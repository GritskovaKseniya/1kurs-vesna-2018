struct IntArray{
    int *data;
    int size;
};

int createArr(IntArray array);///�������� ������
void write(IntArray array);///������ �� �����
int sort(IntArray array);///����������� �������
int getItem(IntArray array);///��������� ��������
int editItem(IntArray array);///��������� ��������
void remove (IntArray array);
IntArray newArray (IntArray array);
