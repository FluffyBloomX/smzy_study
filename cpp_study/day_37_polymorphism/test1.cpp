//
// Created by 20212 on 24-10-28.
//
#include <iostream>
using namespace std;
//�������麯������ ������ �����಻��ʵ����������
// class Car
// {
// public:
//     virtual void Drive() = 0;//���麯�� ����Ҫʵ��
// };
// class Benz:public Car
// {
// public:
//
// };
// int main()
// {
//     return 0;
// }
//���麯��ǿ����д
//��̬�� -> ��̬
//��������û�е�ַ �������������������麯��

//���ﳣ��һ��������:sizeof(base)�Ƕ���
// class Base
// {
// public:
//     virtual void Func1()
//     {
//         cout << "Func1()" << endl;
//     }
//     //���������ָ������˴����
// private:
//     int _b = 1;
// };
// int main()
// {
//     cout << sizeof(Base) << endl;
//     // cout << sizeof(int) << endl;
// //Base���� ���ָ�� �� int
//     //�麯������ʵ����һ��ָ������(�麯��ָ��)
//     return 0;
// }
class Person
{
public:
    virtual void BuyTicket()
    {
        cout << "��Ʊ-ȫ��"<< endl;
    }

};
class Student:public Person
{
public:
    virtual void BuyTicket() override
    {
        cout << "��Ʊ-���" << endl;
    }
};

void Func(Person &p)
{
    p.BuyTicket();
}
int main()
{
    Person Mike;
    Func (Mike);
}