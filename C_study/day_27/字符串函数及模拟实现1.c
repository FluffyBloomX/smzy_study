//
// Created by 20212 on 24-4-17.
//
#include <string.h>
#include <stdio.h>
#include <assert.h>
//�⺯�����淵�ص��� unsigned int
// my_strlen
//int my_strlen(const char* str){
//    int count = 0;
//    assert(str != NULL);
//    while(*str != '\0'){
//        count ++;
//        str++;
//    }
//    return count;
//}
//int main(){
//    char arr[] = "abc";
//    int len = my_strlen(arr);
////����ַ�����û��/0��һֱ�ߵ�/0Ϊֹ
////���������
//    printf("%d",len);
//
//}
//strcopy ���ַ���ָ���Ӧ����ȥ
//int main(){
//    char arr[20] = {0};
//    printf("%s,\n",strcpy (arr,"helloworld"));
//}
//Ҫ��֤Ŀ��ռ��㹻�󣬿��Է���ԭ�ַ���
//Ŀ��ռ����ɱ�
char* my_strcat(const char *dest,const char *src){
//1.�ҵ�Ŀ���ַ�����/0
//2.Դ����׷�ӹ�ȥ
    char * ret = dest;
    while(*dest){
        dest ++;
    }
    while(*dest++ == *src++){
        ;
    }
    return ret;
}
int main(){
    char arr[20] = "hallo";
    printf("%s",my_strcat(arr,"world"));
}