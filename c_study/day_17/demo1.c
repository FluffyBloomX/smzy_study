//
// Created by 20212 on 2024/4/2.
//
//int main(){
//    int arr[10] = {0};
//    void һ�����ں����ķ������� void test(); �������� test(void);
//   �������ڴ�����2���Ƶ���ʽ�洢
//����������˵
//�����ڶ���������3����ʽ ��ԭ�룬���룬����
//��������ԭ�뷴�벹����ͬ
//    int a = -10;
//    return 0;
//�������ڴ��д���ǲ���
//cpu����ֻ�мӷ�����û�м�����
//����ֽ����С���ֽ���
//С���ֽ��� �����ݵĵ�λ�ֽ�������ݴ���ڵ͵�ַ�У���λ�ֽ�����ڸߵ�ַ��
//����ֽ���  �����ݵĵ�λ�ֽ�������ݷ��ڸߵ�ַ�У���λ�ֽ�����ڵ͵�ַ��
//int main(){
//    int a = 0x11223344;
//    ��ǰ����������С���ֽ���
//    return 0;
//�ڴ��ڵ�ַ���Ƕ�����
//}
#include <stdio.h>
//int main(){
////�ڴ��ַ���ɵ͵��ߵ�
//    int a = 1;
//    char *p = (char*) &a;//ȡ��ַaȡ�����������͵ĵ�ַ��������Ҫǿ������ת��
//    printf("%c\n",*p);
//    printf("%d\n",*p);
//    printf("%d\n",0x11);
//    if(*p == 1){
//        printf("С��");
//    }else printf("���");
//return 0;
//}
//int main(){
//    char a = -1;//10000000 00000000 00000000 00000001
//    signed char b = -1;
//// �з���λ������������λ���ԭ����λ
////�޷���λ������������λ���0
//    unsigned char c = -1;
//    printf("a=%d,b=%d,c=%d",a,b,c);
//    a = -1��b = -1��
//char ������signed char����unsigned char��c���Բ�û�й涨��ȡ���ڱ�����
//    char a = 128;
////    ����������ԭ���ķ���λ������λ����
//    printf("%u\n",a);
//10000000 -128 �з���charȡֵ -128��128
//}