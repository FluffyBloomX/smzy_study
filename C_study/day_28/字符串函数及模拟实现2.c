//
// Created by 20212 on 24-4-18.
//
#include <stdio.h>
#include <string.h>
//int main(){
//    char arr[10];
//
//// strcat�����Լ����Լ�׷�� ��Ϊstrcat ��׷���Լ���ʱ�򣬻ᶪ��/0����/0û��ʱ���޷�ֹͣ�����Գ������
////    strcat
//}

//strcmp �ַ����ȽϺ���
//���ڴ���ַ����ַ����Ƚϴ�
//int my_strcmp(char * s1,char * s2){
//    while(*s1 == *s2){
//        if(*s1 == '\0'){
//            return 0;
//        }
//        s1 ++;
//        s2 ++;
//    }
//    return *s1 - *s2;
//}
//int main(){
////    int ret = strcmp("abbbb","abc");
////    printf("%d\n",ret);
//char * p = "abcef";
//char * q = "abcdef";
//int ret = my_strcmp(p,q);
//if(ret >0){
//    printf("p>q");
//}
//    if(ret < 0){
//        printf("p<q");
//    }
//    if(ret == 0){
//        printf("p = q");
//    }
//}
int main(){
    char arr1[20] = "abcdef";
    char arr2[] = "qwer";
//    strncpy
    strncat(arr1,arr2,2);
    printf("%s\n",arr1);
}