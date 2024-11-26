#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<Windows.h>

int main() {
    int i, n;
    int sign = 1;
    double sum = 0.0;
    double numerator1 = 2.0, numerator2 = 3.0;  // 分子的初始值
    double denominator1 = 1.0, denominator2 = 2.0;  // 分母的初始值

    // 输入n值，代表要计算的项数
    printf("请输入项数n: ");
    scanf("%d", &n);

    // 计算前n项的和
    for (i = 1; i <= n; i++) {
        double term = 0.0;
        term = numerator1 / denominator1*sign;
        

        // 累加到总和中
        sum += term;

        // 更新分子和分母（使用斐波那契数列生成分子和分母）
        double next_numerator = numerator1 + numerator2;
        numerator1 = numerator2;
        numerator2 = next_numerator;

        double next_denominator = denominator1 + denominator2;
        denominator1 = denominator2;
        denominator2 = next_denominator;

        sign = -sign;
    }

    // 输出结果
    printf("前%d项的和为: %.6f\n", n, sum);
    system("pause");
    return 0;
}
