#include <cstdio>
#include <cstring>

// � ���� ������ �������� ������� ReadLongString �� ������ ����� �������
#include "StringUtils.h"

int main()
{
    // ������ ����
    FILE* in = fopen("SampleOEM866.txt", "r");

    char* s2;

    while(true)
    {
        char* s2 = ReadLongString(in);

        printf("Read line: %s", s2);

        // ���� �������� � ������� ��������� ������
        // ����� ������ ������ � �������� � �����...
        if(strlen(s2) <= 1)
        {
            break;
        }

        // �� �������� ���������� ������
        delete[] s2;
    }

    fclose(in);

    return 0;
}
