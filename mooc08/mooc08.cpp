#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void fun(int a, int b, int r[]);

int main() {
    int a, b;
    int r[1000]; // 用于存储满足条件的数
    int i = 0;
    scanf("%d %d", &a, &b);

    // 调用函数 fun 生成数列
    fun(a, b, r);

    // 输出结果
    while (r[i] != 0) { // 数组中 0 表示结束
        printf("%d", r[i]);
        i++;
        if (r[i] != 0) {
            printf(" "); // 每个元素后加空格，最后一个元素后无空格
        }
    }
    printf("\n");

    return 0;
}

// 定义函数 fun，用于生成满足条件的数列
void fun(int a, int b, int r[]) {
    int i, j = 0;

    for (i = a; i <= b; i++) {
        // 判断是否满足能被 7 或 11 整除，但不能同时被 7 和 11 整除
        if ((i % 7 == 0 || i % 11 == 0) && !(i % 7 == 0 && i % 11 == 0)) {
            r[j++] = i; // 将满足条件的数存入数组
        }
    }
    r[j] = 0; // 用 0 表示数组结束
}
