#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// ����һ���ṹ���ʾ����
typedef struct {
    int year;
    int month;
    int day;
} Date;

// ��������
int checkDate(Date date);
int isLeapYear(int year);
int daysInMonth(int month, int year);

int main() {
    Date date;
    int valid = 0;

    while (!valid) {
        printf("���������ڣ���ʽ��yyyy mm dd����");
        if (scanf("%d %d %d", &date.year, &date.month, &date.day) != 3) {
            // ��������ʽ����ȷ
            printf("�����ʽ����ȷ�����������룡\n");
            while (getchar() != '\n'); // ������뻺����
        }
        else {
            // ��������Ƿ���Ч
            valid = checkDate(date);
            if (!valid) {
                printf("��Ч�����ڣ����������룡\n");
            }
        }
    }

    printf("����������ǣ�%d-%02d-%02d\n", date.year, date.month, date.day);
    return 0;
}

// ��������Ƿ���Ч�ĺ���
int checkDate(Date date) {
    // �������Ƿ����
    if (date.year < 1) {
        return 0;
    }
    // ����·��Ƿ���Ч
    if (date.month < 1 || date.month > 12) {
        return 0;
    }
    // ��������Ƿ���Ч
    int days_in_month = daysInMonth(date.month, date.year);
    if (date.day < 1 || date.day > days_in_month) {
        return 0;
    }

    return 1; // ������Ч
}

// �ж��Ƿ�������
int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;
    }
    return 0;
}

// �����·ݺ���ݷ��ظ��µ�����
int daysInMonth(int month, int year) {
    switch (month) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        return 31;
    case 4: case 6: case 9: case 11:
        return 30;
    case 2:
        return isLeapYear(year) ? 29 : 28;
    default:
        return 0; // ������·�
    }
}
