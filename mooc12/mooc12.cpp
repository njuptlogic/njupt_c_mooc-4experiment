#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void SumDiff(int a, int b, int* sum, int* diff) {
    *sum = a + b;       // 计算和，并通过指针返回
    *diff = a - b;      // 计算差，并通过指针返回
}

int main() {
    int a, b, sum, dif;

    // 输入两个整数
    scanf("%d%d", &a, &b);

    // 调用SumDiff函数
    SumDiff(a, b, &sum, &dif);

    // 输出和与差
    printf("sum=%d, difference=%d\n", sum, dif);

    return 0;
}
