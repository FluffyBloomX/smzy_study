//
// Created by 20212 on 3/11/2024.
//
#include <stdio.h>
int main(){
    char password[20] = {0};
    printf("����������");
    scanf("%s", password);//123456
    printf("��ȷ������(Y/N):>");
//    ������ȡ�س� ���뺯���ӻ��������������ݣ����������û�����ݣ��ͻ�ȴ�����������������ݣ��ͻ�ֱ������
    int ch = getchar();
    if(ch == 'Y'){
        printf("����ȷ�ϳɹ�");
    }else{
        printf("����ȷ��ʧ��");
    }
}