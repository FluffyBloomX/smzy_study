//
// Created by 20212 on 24-10-23.
//
#include <iostream>
#include <string.h>
using namespace std;

// ģ�庯�����Ƚ����������Ƿ����
template <class T>
bool IsEqual(T& left, T& right)
{
    return left == right; // Ĭ�������ֱ��ʹ�� == ���бȽ�
}

// ȫ�ػ������ char* ���ͽ������⴦���Ƚ��ַ�������
template <>
bool IsEqual<char*>(char*& left, char*& right)
{
    return strcmp(left, right) == 0; // ʹ�� strcmp �����Ƚ��ַ��������Ƿ����
}

// ��ģ��
template <class T1, class T2>
class Data
{
public:
    Data() { cout << "��ͨģ��: Data<T1,T2>" << endl; }
};

// ��ģ���ƫ�ػ���ƫ�ػ������һ��ģ�����Ϊ int �����
template <class T2>
class Data<int, T2>
{
public:
    Data() { cout << "ƫ�ػ�: Data<int,T2>" << endl; }
};

template <class T1, class T2>
class Data<T1*, T2*>
{
public:
    Data() { cout << "��ͨģ��: Data<T1*,T2*>" << endl; }
};
//ƫ�ػ� �������ػ����ֲ���/���߶�һЩ������һ��������
int main()
{
    int a = 0, b = 1;
    cout << IsEqual(a, b) << endl; // ������Ϊ 0��false������Ϊ 0 != 1

    char* p1 = (char*)"hello"; // ע�⣺��Ҫ���ַ���������ת��Ϊ char*
    char* p2 = (char*)"world";
    cout << IsEqual(p1, p2) << endl; // ������Ϊ 0��false������Ϊ "hello" != "world"

    Data<int, char> d1; // ʹ��ƫ�ػ���ģ��
    Data<double, char> d2; // ʹ����ͨģ��
    return 0;
}

// ȫ�ػ� (Full Specialization)��Ϊ�ض������ṩ��ȫ��ͬ��ʵ�֣�
// �������� char* �����ػ���ר�Ŵ����ַ����ıȽ��߼���

// ƫ�ػ� (Partial Specialization)��ֻΪĳЩ�ض������µ������ṩ���⴦��
// ���磬����ģ���У�ƫ�ػ������һ��ģ�����Ϊ int �������
