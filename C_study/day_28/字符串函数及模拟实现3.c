//
// Created by 20212 on 24-4-19.
//
#include <stdio.h>
#include  <string.h>
//char * my_strstr(const char*str1,const char* str2){
////    assert()
//    const char * s1 = NULL;
//    const char * s2 = NULL;
//    const char * cp = str1;
//    if(*str2  ==  '\0'){
//        return (char*)cp;
//    }
//    while(*cp){
//        s1 = cp;
//        s2 = str2;
//        while(*s1 && *s2 && (*s1 == *s2)){
//            s1  ++;
//            s2 ++;
//        }
//        if(*s2 == '\0'){
//            return (char *)cp;
//        }
//        cp ++;
//    }
//    return NULL;
//}
int main() {
//    char arr1[] = "abcdefghef";
//    char arr2[] = "bcd";
//     //��arr1�в����Ƿ����arr2����
//     char *ret = my_strstr(arr1,arr2);
//    if (ret == NULL){
//        printf("û���ҵ�");
//    }else{
//        printf("�ҵ��ˣ�%s",ret);
//    }
//     return 0;
    char arr[] = "simazhangyu@gmail.com";
    char * p = "@.";
    char temp[20] = {0};

    char * ret = NULL;
    ret = strcpy(temp,arr);
    for(ret = strtok(temp,p);ret != NULL;ret = strtok(NULL,p)){
        printf("%s\n",ret);
    }

}