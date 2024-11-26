#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    double F, C;

    // 使用scanf读取用户输入的华氏温度，格式为%lf
    scanf("%lf", &F);

    // 计算摄氏温度
    C = 5 * (F - 32) / 9;

    // 输出摄氏温度，格式为%lf
    printf("Celsius=%.6lf\n", C);

    return 0;
}