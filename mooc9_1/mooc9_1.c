#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 定义一个函数，用于计算给定年份2月的天数
int DAYS_FEB(int year) {
    // 判断是否是闰年
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 29; // 闰年2月有29天
    }
    else {
        return 28; // 平年2月有28天
    }
}

int main() {
    int year;
    scanf("%d", &year);

    // 调用DAYS_FEB函数计算2月的天数
    int days = DAYS_FEB(year);

    // 按照指定格式输出结果
    printf("days of the FEB.: %d\n", days);

    return 0;
}
