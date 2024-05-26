#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_BOOKS 100
#define NAME_LEN 100

typedef struct {
    char num[14];
    char name[NAME_LEN];
    float price;
} Book;

typedef struct {
    Book books[MAX_BOOKS];
    int size;
} BookList;

void initBookList(BookList* list) {
    list->size = 0;
}

void readBooksFromFile(BookList* list, const char* filepath) {
    FILE* file = fopen(filepath, "r");
    if (!file) {
        printf("�޷����ļ� %s��\n", filepath);
        return;
    }
    while (fscanf(file, "%s\t%[^\t]\t%f", list->books[list->size].num, list->books[list->size].name, &list->books[list->size].price) != EOF) {
        list->size++;
        if (list->size >= MAX_BOOKS) {
            printf("�鼮�б��������޷����ظ����鼮��\n");
            break;
        }
    }
    fclose(file);
}

void insertBook(BookList* list, const char* num, const char* name, float price) {
    if (list->size >= MAX_BOOKS) {
        printf("�鼮�б��������޷��������顣\n");
        return;
    }
    strncpy(list->books[list->size].num, num, 14);
    strncpy(list->books[list->size].name, name, NAME_LEN);
    list->books[list->size].price = price;
    list->size++;
    printf("Book����ɹ���\n");
}

void deleteBook(BookList* list, const char* num) {
    for (int i = 0; i < list->size; i++) {
        if (strcmp(list->books[i].num, num) == 0) {
            for (int j = i; j < list->size - 1; j++) {
                list->books[j] = list->books[j + 1];
            }
            list->size--;
            printf("Book ͨ��num %s ɾ���ɹ���\n", num);
            return;
        }
    }
    printf("û���鱾���ҵ���\n");
}

void findBookByNum(BookList* list, const char* num) {
    for (int i = 0; i < list->size; i++) {
        if (strcmp(list->books[i].num, num) == 0) {
            printf("ͨ��num�ҵ�book: num: %s, name: %s, price: %.2f\n",
                   list->books[i].num, list->books[i].name, list->books[i].price);
            return;
        }
    }
    printf("û��ͨ��num�ҵ�.\n");
}

void getBook(BookList* list, const char* input_str) {
    char num[14], name[NAME_LEN];
    float price;
    int num_provided = 0, name_provided = 0, price_provided = 0;
    int result = sscanf(input_str, "%s %s %f", num, name, &price);
    if (result >= 1) num_provided = 1;
    if (result >= 2) name_provided = 1;
    if (result == 3) price_provided = 1;

    for (int i = 0; i < list->size; i++) {
        int num_match = num_provided ? (strcmp(list->books[i].num, num) == 0) : 0;
        int name_match = name_provided ? (strcmp(list->books[i].name, name) == 0) : 0;
        int price_match = price_provided ? (list->books[i].price == price) : 0;
        if ((num_provided && num_match) || (name_provided && name_match) || (price_provided && price_match)) {
            printf("�ҵ� book: num: %s, name: %s, price: %.2f\n",
                   list->books[i].num, list->books[i].name, list->books[i].price);
            return;
        }
    }
    printf("û�з����鱾.\n");
}

void printBooks(BookList* list) {
    for (int i = 0; i < list->size; i++) {
        printf("num: %s, name: %s, price: %.2f\n", list->books[i].num, list->books[i].name, list->books[i].price);
    }
}

void menu() {
    printf("************************************\n");
    printf("*******  1.���ļ�����ͼ����Ϣ  *********\n");
    printf("*******  2.����ͼ��          *********\n");
    printf("*******  3.ͨ��numɾ��ͼ��    *********\n");
    printf("*******  4.ͨ��num�ҵ�ͼ��    *********\n");
    printf("*******  5.����ͼ��          *********\n");
    printf("*******  6.��ӡͼ��          *********\n");
    printf("*******  0.�˳�              *********\n");
    printf("************************************\n");
}

void function(BookList* list) {
    int input = 0;
    do {
        menu();
        printf("��ѡ��:>");
        scanf("%d", &input);
        switch (input) {
            case 1: {
                printf("���ļ�����ͼ����Ϣ\n");
                char filepath[256];
                printf("�������ļ�·��:>");
                scanf("%s", filepath);
                readBooksFromFile(list, filepath);
                break;
            }
            case 2: {
                printf("����ͼ��\n");
                char num[14], name[NAME_LEN];
                float price;
                printf("������num:>");
                scanf("%s", num);
                printf("������name:>");
                scanf(" %[^\n]", name);  // ���������а����ո�
                printf("������price:>");
                scanf("%f", &price);
                insertBook(list, num, name, price);
                break;
            }
            case 3: {
                printf("ͨ��numɾ��ͼ��\n");
                char num[14];
                printf("������num:>");
                scanf("%s", num);
                deleteBook(list, num);
                break;
            }
            case 4: {
                printf("ͨ��num�ҵ�ͼ��\n");
                char num[14];
                printf("������num:>");
                scanf("%s", num);
                findBookByNum(list, num);
                break;
            }
            case 5: {
                printf("����ͼ��\n");
                char input_str[256];
                printf("������������� (��ʽ: num name price):>");
                scanf(" %[^\n]", input_str);  // ������������ո���ַ���
                getBook(list, input_str);
                break;
            }
            case 6: {
                printf("��ӡͼ��\n");
                printBooks(list);
                break;
            }
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
    function(&list);
    return 0;
}