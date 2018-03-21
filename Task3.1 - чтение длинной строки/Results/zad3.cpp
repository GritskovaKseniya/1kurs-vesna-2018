
#include "stdafx.h"

#include <cstdio>
#include <cstring>
#include <clocale>
#include <iostream>
using namespace std;


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
    FILE* out = fopen("file1.txt", "w");
    // � ������� ��������� void* ���������, ������� ������ ���������� (1) �� �������, ������� ���� �������� ���� ������� �������
    fwrite(s, 1, strlen(s), out);
    // �� �������� ������� ����!
    fclose(out);

    // ������� ������ �� ����
    delete[] s;

    printf("Load it from file.txt\n");

    // ������ ����
    FILE* in = fopen("file1.txt", "r");
	printf("ok\n");
    char* s2 = ReadLongString(in);
	printf("ok\n");
    fclose(in);

    printf("Read from file: %s", s2);

    // �� �������� ���������� ������
    delete[] s2;

    return 0;
}



//// ������� 2

char*  ReadLongString(FILE *f)
{
	int size = 5, R = size, L = 0;
	char *s = new char[size + 1];
	s[0] = 0, s[R - 1] = 0; // � ������ ������� ����� ������� ������

	while (true) // ����������� ����
	{
		if (!fgets(s + L, R - L + 1, f)) // fgets ���������� NULL ���� ��������� ������
		if (feof(f) && s[0])
			return s;	// ����� ����� ��� ���������, �� � ������� s ���-�� ���� - ��������� ��� ��� ��������� ������ ���������
		else			// ����� ����� ��� ��������� � �� ���� ������ �� ��� ��������
		{
			delete[]s; return 0;
		}

		//���� ������� fgets ����������, �� ��������� - ���� � ��������� �������� ������� �� ������
		//������ (������� c fgets ������, � �� ������� ����� ������ - '\0' ��� '\n'), �� ������ ��� �� ��� �������
		if (*(s + R - 1) && *(s + R - 1) != '\n')
		{
			char* newS = new char(R + size + 1); // ����� ������, ����������� �� size ���������
			strcpy(newS, s); // �������� � ����� ������ "������" ��������
		//	cout << "String S = " << s << "\t" << "String newS = " << newS << endl; // ������� - �������
			delete []s; // ������ �������� ������ ������ �� �����
			s = newS; // ������������� ��������� �� ������ ������ �������
			L = R;			//����� ����� �������� ������
			R += size;		//������ ����� ���� �������� �� size
			s[R - 1] = 0;	//�������� ��������� ������� char ������� - ������ ������� ����� ������
		}
		else	return s;
	}
}
int main()
{
	//setlocale(LC_ALL, "Russian"); // ������ ������

	printf("Input long string \n");

	char* s1 = ReadLongString(stdin);  // ������ ������� � �������
	//s = ReadLongString("1.txt");
	cout << s1 << endl;
	// �������. ������ ����� ������ �� ������� ������ ����������, �.�. � ������ ����� ������� ������ \n

	printf("Readed: %s\nLength=%d\n", s1, strlen(s1));

	// ��������� � ���� - ����� ���� ��������� ��������
	// �� �������� ����� ����� ���� ����� � Notepad++ --> ��������� --> ��������� --> OEM866
	printf("Saving it to file file.txt (encoding OEM866)\n");
	FILE* out = fopen("file.txt", "w");
	// � ������� ��������� void* ���������, ������� ������ ���������� (1) �� �������, ������� ���� �������� ���� ������� �������
	fwrite(s1, 1, strlen(s1), out);
	// �� �������� ������� ����!
	fclose(out);

	// ������� ������ �� ����
	delete [] s1;

	printf("Load it from file.txt\n");

	// ������ ����
	FILE* in = fopen("file.txt", "r");
	if (in != NULL)
	{
		char* s2 = ReadLongString(in);
		fclose(in);

		printf("Read from file: %s", s2);

		// �� �������� ���������� ������
		delete[] s2;
	}
	else cout << "Error !!!" << endl;
	return 0;
}
//////////////////////////////////  realloc �������������� �������
#include "stdafx.h"

#include <cstdio>
#include <cstring>
#include <clocale>
#include <iostream>

//using namespace System;
using namespace std;


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(void)
{
	int N = 3;
char *p;
p = (char *) malloc(N);
//p = new char[N];
char *newp = new char[N];

if(!p) {
printf("Allocation error.");
exit (1);
}
fgets(p, N, stdin);
p[N-1]=123;
while (p[N-1] != 123)
{
fgets(p, N, stdin);
strcpy(newp, p);
newp = (char *) realloc (newp,++N);
if(!newp) {
printf("Allocation error.");
exit (1);
}
strcat (newp, p);
}

printf(p);


free(p);
free(newp);
//delete [] p;
//delete [] newp;
return 0;
}



