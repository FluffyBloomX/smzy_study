//
// Created by 20212 on 24-4-25.
//

#include "new_contact.h"

void menu(){
    printf("************************************\n");
    printf("*******1.add ****** 2.del*********************\n");
    printf("*******3.search*****4.modify*******************\n");
    printf("*******5.sort ******6.print*********************\n");
    printf("*******0.exit****************************\n");
    printf("************************************\n");
}
enum Option{
    EXIT,
    ADD,
    DEL,
    SEARCH,
    MODIFY,
    SORT,
    PRINT
};
int main(){
    int input = 0;
    //����ͨѶ¼
    Contact con;
    //��ʼ��ͨѶ¼
    InitContact(&con);//Request a contiguous piece of space for data on the heap
    do{
        menu();
        printf("��ѡ�� ��->");
        scanf("%d",&input);
        switch(input){
            case ADD:
                //�����˵���Ϣ
                AddContact(&con);
                break;
            case DEL:
                DelContact(&con);
                break;
            case SEARCH:
                SearchContact(&con);
                break;
            case MODIFY:
                ModifyContact(&con);
                break;
            case SORT:
                SortContact(&con);
                break;
            case PRINT:
                PrintContact(&con);
                break;
            case EXIT:
                DestoryContact(&con);
                break;
            default:
                printf("ѡ�����");
                break;
        }
    }while(input);
    return 0;
}