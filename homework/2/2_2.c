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
    printf("ͼ�����ɹ���\n");
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
            printf("ͼ��ɾ���ɹ���\n");
            return;
        }
        prev = current;
        current = current->next;
    }
    printf("δ�ҵ�ͼ�顣\n");
}

void findBookByNum(BookList* list, const char* num) {
    Book* current = list->head;
    while (current != NULL) {
        if (strcmp(current->num, num) == 0) {
            printf("�ҵ�ͼ��: ���: %s, ����: %s, �۸�: %.2f\n", current->num, current->name, current->price);
            return;
        }
        current = current->next;
    }
    printf("δ�ҵ�ͼ�顣\n");
}

void printBooks(BookList* list) {
    Book* current = list->head;
    while (current != NULL) {
        printf("���: %s, ����: %s, �۸�: %.2f\n", current->num, current->name, current->price);
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

void handleUserInput(BookList* list) {
    int input;
    do {
        menu();
        printf("��ѡ��:>");
        scanf("%d", &input);
        getchar();  // consume the newline character
        char filepath[256];
        switch (input) {
            case 1:
                inputBookInfo(list);
                break;
            case 2:
                printf("������Ҫɾ����ͼ����: ");
                char num[14];
                scanf("%s", num);
                deleteBook(list, num);
                break;
            case 3:
                printf("������Ҫ��ѯ��ͼ����: ");
                scanf("%s", num);
                findBookByNum(list, num);
                break;
            case 4:
                printBooks(list);
                break;
            case 5:
                printf("�������ļ�·��: ");
                scanf("%s", filepath);
                readBooksFromFile(list, filepath);
                break;
            case 0:
                printf("�˳�\n");
                break;
            default:
                printf("�������������\n");
                break;
        }
    } while (input != 0);
}

int main() {
    BookList list;
    initBookList(&list);
    handleUserInput(&list);
    return 0;
}