//
// Created by 20212 on 2024/3/21.
//
#include <stdio.h>
#include "game.h"
void game(){
    //�洢���� -��ά����
    char board[ROW][COL];
//   ��ʼ������ - ��ʼ���ո�
    InitBoard(board,ROW,COL);
//    ��ӡ����
    DisplayBoard(board,ROW,COL);
//    ��������
//    ������ж�ʤ��

}
void menu(){
    printf("**************************\n");
    printf("*******  1.play  *********\n");
    printf("*******  0.exit  *********\n");
    printf("**************************\n");
}
int main(){
    int input = 0;
    do{
        menu();
        printf("��ѡ��:>");
        scanf("%d",&input);
        switch(input){
            case 1:
                printf("��������Ϸ\n");
                game();
                break;
            case 0:
                printf("�˳���Ϸ\n");
                break;
            default:
                printf("�������������\n");
                break;
        }
    }while(input);
}