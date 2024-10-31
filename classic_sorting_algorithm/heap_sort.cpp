#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(int arr[], int n, int i) {
    int largest = i;
    int lson = 2 * i + 1; // ���ӽڵ�
    int rson = 2 * i + 2; // ���ӽڵ�
    
    if (lson < n && arr[lson] > arr[largest]) // �����ȽϷ���
        largest = lson;
    if (rson < n && arr[rson] > arr[largest]) // �����ȽϷ���
        largest = rson;
    
    if (largest != i) {
        swap(&arr[largest], &arr[i]);
        heapify(arr, n, largest);
    }
}

void heap_sort(int arr[], int n) { // ����������
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
    for (int i = n - 1; i > 0; i--) {
        swap(&arr[i], &arr[0]);
        heapify(arr, i, 0);
    }
}

void testHeapSort() { // ����������
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("ԭʼ����: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    heap_sort(arr, n); // ����������

    printf("����������: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    testHeapSort();
    return 0;
}
//���ȶ� O(nlogn)
