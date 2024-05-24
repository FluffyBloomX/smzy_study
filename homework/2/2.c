//
// Created by 20212 on 2024/5/24.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NAME_LEN 100
#define MAX_BOOKS 100

typedef struct Book {
    char num[14];
    char name[NAME_LEN];
    float price;
    struct Book* next;
} Book;

typedef struct {
    Book* head;
    int size;
} BookList;

void initBookList(BookList* list) {
    list->head = NULL;
    list->size = 0;
}

void insertBook(BookList* list, const char* num, const char* name, float price) {
    Book* newBook = (Book*)malloc(sizeof(Book));
    if (!newBook) {
        printf("�ڴ����ʧ�ܣ��޷��������顣\n");
        return;
    }
    strncpy(newBook->num, num, 14);
    strncpy(newBook->name, name, NAME_LEN);
    newBook->price = price;
    newBook->next = list->head;
    list->head = newBook;
    list->size++;
    printf("Book����ɹ���\n");
}

void deleteBook(BookList* list, const char* num) {
    Book* current = list->head;
    Book* prev = NULL;

    while (current != NULL) {
        if (strcmp(current->num, num) == 0) {
            if (prev == NULL) {
                list->head = current->next;
            } else {
                prev->next = current->next;
            }
            free(current);
            list->size--;
            printf("Book ͨ��num %s ɾ���ɹ���\n", num);
            return;
        }
        prev = current;
        current = current->next;
    }
    printf("û���鱾���ҵ���\n");
}

void findBookByNum(BookList* list, const char* num) {
    Book* current = list->head;
    while (current != NULL) {
        if (strcmp(current->num, num) == 0) {
            printf("ͨ��num�ҵ�book: num: %s, name: %s, price: %.2f\n",
                   current->num, current->name, current->price);
            return;
        }
        current = current->next;
    }
    printf("û��ͨ��num�ҵ�.\n");
}

void printBooks(BookList* list) {
    Book* current = list->head;
    while (current != NULL) {
        printf("num: %s, name: %s, price: %.2f\n", current->num, current->name, current->price);
        current = current->next;
    }
}

void readBooksFromFile(BookList* list, const char* filepath) {
    FILE* file = fopen(filepath, "r");
    if (!file) {
        printf("�޷����ļ� %s��\n", filepath);
        return;
    }
    char num[14], name[NAME_LEN];
    float price;
    while (fscanf(file, "%s %s %f", num, name, &price) == 3) {
        insertBook(list, num, name, price);
    }
    fclose(file);
}

void inputBookInfo(BookList* list) {
    char num[14], name[NAME_LEN];
    float price;
    printf("������ͼ����: ");
    scanf("%s", num);
    printf("������ͼ������: ");
    scanf("%s", name);
    printf("������ͼ��۸�: ");
    scanf("%f", &price);
    insertBook(list, num, name, price);
}

void getValue(BookList* list) {
    char num[14];
    printf("������Ҫ��ѯ��ͼ����: ");
    scanf("%s", num);
    findBookByNum(list, num);
}

void insert(BookList* list) {
    inputBookInfo(list);
}

void delete(BookList* list) {
    char num[14];
    printf("������Ҫɾ����ͼ����: ");
    scanf("%s", num);
    deleteBook(list, num);
}

void output(BookList* list) {
    printf("��ӡͼ����Ϣ��\n");
    printBooks(list);
}

void menu() {
    printf("************************************\n");
    printf("*******  1.����ͼ��          *********\n");
    printf("*******  2.ɾ��ͼ��          *********\n");
    printf("*******  3.����ͼ��          *********\n");
    printf("*******  4.���ͼ����Ϣ      *********\n");
    printf("*******  5.���ļ�����ͼ��    *********\n");
    printf("*******  0.�˳�              *********\n");
    printf("************************************\n");
}

void function(BookList* list) {
    int input = 0;
    do {
        menu();
        printf("��ѡ��:>");
        scanf("%d", &input);
        switch(input) {
            case 1:
                printf("����ͼ��\n");
                insert(list);
                break;
            case 2:
                printf("ɾ��ͼ��\n");
                delete(list);
                break;
            case 3:
                printf("����ͼ��\n");
                getValue(list);
                break;
            case 4:
                printf("���ͼ����Ϣ\n");
                output(list);
                break;
            case 5:
                printf("���ļ�����ͼ��\n");
                readBooksFromFile(list, "E:\\GitHub\\smzy_study\\homework\\2\\book.txt");
                break;
            case 0:
                printf("�˳�\n");
                break;
            default:
                printf("�������������\n");
                break;
        }
    } while(input != 0);
}

int main() {
    BookList list;
    initBookList(&list);
    function(&list);
    return 0;
}
