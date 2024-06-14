#include <stdio.h>
#include <stdlib.h>

typedef int DataType;
typedef struct {
    DataType *arr;
    int length;
} SeqList;

void BubbleSort(SeqList *L) {
    for (int i = 0; i < L->length - 1; i++) {
        for (int j = 0; j < L->length - 1 - i; j++) {
            if (L->arr[j] > L->arr[j + 1]) {
                int temp = L->arr[j];
                L->arr[j] = L->arr[j + 1];
                L->arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    // ��ʼ��һ������
    SeqList list;
    printf("���������еĳ���: ");
    scanf("%d", &list.length);
    // �����ڴ沢��ʼ������
    list.arr = (DataType *)malloc(list.length * sizeof(DataType));
    if (list.arr == NULL) {
        printf("�ڴ����ʧ��\n");
        return 1;
    }
    // ��ȡ���е�Ԫ��
    printf("���������е�Ԫ��: ");
    for (int i = 0; i < list.length; i++) {
        scanf("%d", &list.arr[i]);
    }
    // �������ǰ������
    printf("����ǰ������: ");
    for (int i = 0; i < list.length; i++) {
        printf("%d ", list.arr[i]);
    }
    printf("\n");
    // ����BubbleSort������������
    BubbleSort(&list);
    // �������������
    printf("����������: ");
    for (int i = 0; i < list.length; i++) {
        printf("%d ", list.arr[i]);
    }
    printf("\n");
    // �ͷ��ڴ�
    free(list.arr);
    return 0;
}
