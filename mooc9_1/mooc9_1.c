#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ����һ�����������ڼ���������2�µ�����
int DAYS_FEB(int year) {
    // �ж��Ƿ�������
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 29; // ����2����29��
    }
    else {
        return 28; // ƽ��2����28��
    }
}

int main() {
    int year;
    scanf("%d", &year);

    // ����DAYS_FEB��������2�µ�����
    int days = DAYS_FEB(year);

    // ����ָ����ʽ������
    printf("days of the FEB.: %d\n", days);

    return 0;
}
