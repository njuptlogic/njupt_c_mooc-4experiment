#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<windows.h>
int main() {
    int a, b;
    int sum, difference, product;
    float quotient, ave;

    // 输入两个整数
    printf("请输入两个整数a和b: ");
    scanf("%d %d", &a, &b);

    // 计算和、差、积、商、平均值
    sum = a + b;
    difference = a - b;
    product = a * b;

    // 判断除数是否为零，避免除零错误
    if (b != 0) {
        quotient = (float)a / b;  // 将a转换为浮点数，以得到浮点结果
    }
    else {
        printf("b不能为0，无法计算商。\n");
        quotient = 0.0;  // 避免未初始化的quotient
    }

    ave = (float)(a + b) / 2;  // 计算平均值

    // 输出结果
    printf("sum = %d\n", sum);
    printf("difference = %d\n", difference);
    printf("product = %d\n", product);
    if (b != 0) {
        printf("quotient = %.2f\n", quotient);  // 保留两位小数输出商
    }
    printf("average = %.2f\n", ave);  // 保留两位小数输出平均值
    system("pause");
    return 0;
}
