#include <cstdio>
#include <cstring>
#include <clocale>

char* ReadLongString(FILE* stream)
{
	int size = 3;

    char *buffer = new char[size];           // ����������� �������� ���������� ����������
    char *readStart = buffer;                // �������������� ��� �� ���������� ������

	int i = 0;

    buffer[size-1] = 123;

    while(true)
    {
        int fgets (char *buffer, int i, FILE *stream);
        char n = *(buffer + strlen(buffer) - 1);

        if ((n != '\n')&& (!feof(stream))) // ������� ���������� ��������� ��������, ���� �������� ������ ��������� �� ������ �����
        {

            return buffer;
        }

        else
			{
       		 break;
    		}

        buffer[size-1] = 123;
    }

    return buffer;
}



int main()
{
    //setlocale(LC_ALL, "Russian"); // ������ ������
    printf("Input long string\n");

    // ������ ������� � �������
    char* s = ReadLongString(stdin);

    // �������. ������ ����� ������ �� ������� ������ ����������, �.�. � ������ ����� ������� ������ \n
    printf("Readed: %s\nLength=%d\n", s, strlen(s));

    // ��������� � ���� - ����� ���� ��������� ��������
    // �� �������� ����� ����� ���� ����� � Notepad++ --> ��������� --> ��������� --> OEM866
    printf("Saving it to file file.txt (encoding OEM866)\n");
    FILE* out = fopen("file.txt", "w");
    // � ������� ��������� void* ���������, ������� ������ ���������� (1) �� �������, ������� ���� �������� ���� ������� �������
    fwrite(s, 1, strlen(s), out);
    // �� �������� ������� ����!
    fclose(out);

    // ������� ������ �� ����
    delete[] s;

    printf("Load it from file.txt\n");

    // ������ ����
    FILE* in = fopen("file.txt", "r");
    char* s2 = ReadLongString(in);
    fclose(in);

    printf("Read from file: %s", s2);

    // �� �������� ���������� ������
    delete[] s2;

    return 0;
}

