#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

// 计算阶乘的函数
double factorial(int n) {
    double result = 1.0;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    double m;
    double term, sum = 0;
    int i = 1;

    // 输入 m 的值
    printf("");
    scanf("%lf", &m);

    // 初始化第一个项
    term = m;

    // 循环累加每一项，直到最后一项的绝对值小于 1e-4
    while (fabs(term) >= 1e-4) {
        sum += term;
        i++;
        // 计算下一项，奇数项为正，偶数项为负
        term = pow(m, i) / factorial(i);
        if (i % 2 == 0) {
            term = -term;
        }
    }

    // 输出结果，保留两位小数
    printf("%.2f\n", sum);

    return 0;
}






















