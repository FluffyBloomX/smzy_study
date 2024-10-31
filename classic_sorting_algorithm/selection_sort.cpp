//
// Created by 20212 on 24-11-1.
//
#include <stdio.h>
void swap(int* a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void SelectSort(int arr[], int n) {
    int i, j, min;
    for (i = 0; i < n; i++) {
        min = i; // �����һ��������С��
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) { // ȥ���ֺ�
                min = j; // ������Сֵ������
            }
        }
        swap(&arr[i], &arr[min]); // ����������λ��
    }
}

void testSelectSort() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("ԭʼ����: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    SelectSort(arr, n);

    printf("����������: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    testSelectSort();
    return 0;
}