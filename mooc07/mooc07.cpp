#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int year, month, day;
    int days_in_month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int i, day_of_year = 0;

    // �����ʽΪ��-��-��
    scanf("%d-%d-%d", &year, &month, &day);

    // �ж��Ƿ�Ϊ���꣬�������µ�����
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        days_in_month[1] = 29;  // ���������29��
    }

    // �����1�µ�ָ���·�ǰһ���µ�������
    for (i = 0; i < month - 1; i++) {
        day_of_year += days_in_month[i];
    }

    // ���ϵ��µ�����
    day_of_year += day;

    // ����������ǵ���ĵڼ���
    printf("%d" , day_of_year);

    return 0;
}
