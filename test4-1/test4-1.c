#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 定义一个结构体表示日期
typedef struct {
    int year;
    int month;
    int day;
} Date;

// 函数声明
int checkDate(Date date);
int isLeapYear(int year);
int daysInMonth(int month, int year);

int main() {
    Date date;
    int valid = 0;

    while (!valid) {
        printf("请输入日期（格式：yyyy mm dd）：");
        if (scanf("%d %d %d", &date.year, &date.month, &date.day) != 3) {
            // 如果输入格式不正确
            printf("输入格式不正确，请重新输入！\n");
            while (getchar() != '\n'); // 清空输入缓冲区
        }
        else {
            // 检查日期是否有效
            valid = checkDate(date);
            if (!valid) {
                printf("无效的日期，请重新输入！\n");
            }
        }
    }

    printf("输入的日期是：%d-%02d-%02d\n", date.year, date.month, date.day);
    return 0;
}

// 检查日期是否有效的函数
int checkDate(Date date) {
    // 检查年份是否合理
    if (date.year < 1) {
        return 0;
    }
    // 检查月份是否有效
    if (date.month < 1 || date.month > 12) {
        return 0;
    }
    // 检查日期是否有效
    int days_in_month = daysInMonth(date.month, date.year);
    if (date.day < 1 || date.day > days_in_month) {
        return 0;
    }

    return 1; // 日期有效
}

// 判断是否是闰年
int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;
    }
    return 0;
}

// 根据月份和年份返回该月的天数
int daysInMonth(int month, int year) {
    switch (month) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        return 31;
    case 4: case 6: case 9: case 11:
        return 30;
    case 2:
        return isLeapYear(year) ? 29 : 28;
    default:
        return 0; // 错误的月份
    }
}
