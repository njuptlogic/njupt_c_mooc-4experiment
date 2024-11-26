#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int year, month, day;
    int days_in_month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int i, day_of_year = 0;

    // 输入格式为年-月-日
    scanf("%d-%d-%d", &year, &month, &day);

    // 判断是否为闰年，调整二月的天数
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        days_in_month[1] = 29;  // 闰年二月有29天
    }

    // 计算从1月到指定月份前一个月的总天数
    for (i = 0; i < month - 1; i++) {
        day_of_year += days_in_month[i];
    }

    // 加上当月的天数
    day_of_year += day;

    // 输出该日期是当年的第几天
    printf("%d" , day_of_year);

    return 0;
}
