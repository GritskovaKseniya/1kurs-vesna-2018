#ifndef SLOVARDALYA_H_INCLUDED
#define SLOVARDALYA_H_INCLUDED

/// ������ ��� ������ �� ������� ����

/// �������� ������� �� �����
void LoadDict(char* path);

/// ������ �������
struct DictArticle
{
    /// �����
    char* word;

    /// �������� �������� �����
    char* data;
};

/// �������� ����������� ������
struct DictSearchIterator
{
    /// ������, ���������� �������� ���������� ��������
    char* query;

    // ����������, �� ������ ������� �������� �����,
    // ��� ������ ��������� ������
};

/// ����� � ������� �� ������ �����
/// ���������� �������� �� ����������� ������
DictSearchIterator SearchDict(char* query);

/// ���������� ��������� ���������� ������
/// ��� ������, ���� ����������� ������ ���
/// (��. IsEmpty)
DictArticle NextResult(DictSearchIterator* iter); // ������ ���������?

/// ���������, �������� �� ������ ������
bool IsEmpty(DictArticle a);

#endif // SLOVARDALYA_H_INCLUDED
