#include <stdio.h>
int main() {
    float num1, num2, result;
    int choice;
    printf("�������һ�����֣�");
    scanf("%f", &num1);
    printf("������ڶ������֣�");
    scanf("%f", &num2);
    printf("\nѡ�����㣺\n");
    printf("1. �ӷ�\n");
    printf("2. ����\n");
    printf("3. �˷�\n");
    printf("4. ����\n");
    printf("���������ѡ��1/2/3/4����");
    scanf("%d", &choice);
    switch(choice) {
    case 1:
        result = num1 + num2;
        printf("�����%.2f + %.2f = %.2f\n", num1, num2, result);
        break;
    case 2:
        result = num1 - num2;
        printf("�����%.2f - %.2f = %.2f\n", num1, num2, result);
        break;
    case 3:
        result = num1 * num2;
        printf("�����%.2f * %.2f = %.2f\n", num1, num2, result);
        break;
    case 4:
            if (num2 != 0) {
                result = num1 / num2;
                printf("�����%.2f / %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("��������Ϊ�㣡\n");
            }
        break;
    default:
        printf("��Ч��ѡ��\n");
        break;
    }

    return 0;
}
