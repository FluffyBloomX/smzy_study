#include <stdio.h>

int main() {
    double balance, deposit, withdraw, interest_rate, interest_after_1_year;
    int account_type;

    // ��ʼ�˻����
    double regular_balance = 2000, savings_balance = 1000;

    // �˻�������ʾ
    printf("ѡ���˻����ͣ�1�������˻���2�������˻�����");
    scanf("%d", &account_type);

    // 2.2 ��������
    printf("���������");
    scanf("%lf", &deposit);

    // ����ѡ����˻����ͽ��д���
    if (account_type == 1) {
        balance = regular_balance + deposit;
        interest_rate = 0.05;  // �����˻�����Ϊ5%
    } else if (account_type == 2) {
        balance = savings_balance + deposit;
        interest_rate = 0.01;  // �����˻�����Ϊ1%
    } else {
        printf("��Ч���˻�����\n");
        return 0;
    }

    // 2.3 ����������Ϣ
    interest_after_1_year = balance * interest_rate;

    printf("�˻���%.2lfԪ\n", balance);
    printf("1������Ϣ��%.2lfԪ\n", interest_after_1_year);

    // 2.4 ȡ���
    printf("������ȡ���");
    scanf("%lf", &withdraw);

    // �ж�ȡ���Ƿ�Ϸ�
    if (withdraw > balance) {
        printf("���㣬�޷�ȡ��\n");
    } else {
        balance -= withdraw;  // �۳�ȡ����
        interest_after_1_year = balance * interest_rate;  // ������Ϣ

        printf("ȡ����˻���%.2lfԪ\n", balance);
        printf("ȡ���1������Ϣ��%.2lfԪ\n", interest_after_1_year);
    }

    return 0;
}
