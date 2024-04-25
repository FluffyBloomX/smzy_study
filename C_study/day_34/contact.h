//
// Created by 20212 on 24-4-25.
//
#include <stdio.h>
#include <string.h>
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30
#define MAX 1000
//
//typedef [existing_data_type] [new_data_type_name];
//typedef �� C ����������Ϊ���е��������Ͷ����µ����ƵĹؼ���
typedef struct PeoInfo{
    char name[MAX_NAME];
    char sex[MAX_SEX];
    int age;
    char tele[MAX_TELE];
    char addr[MAX_ADDR];
}PeoInfo;//��struct PeoInfo������ΪPeoInfo
typedef struct Contact{
    PeoInfo data[MAX];//�����ӽ����˵���Ϣ ����һ��PeoInfo����
    int sz;//��¼��ǰͨѶ¼����Ч��Ϣ�ĸ���
}Contact;
void InitContact(Contact* pc);
void AddContact(Contact* pc);
void PrintContact(const Contact* pc);
void DelContact(Contact *pc);
void SearchContact(Contact *pc);