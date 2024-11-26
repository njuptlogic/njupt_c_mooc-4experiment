#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 交换两个数的值
void swap(double* x, double* y) {
    double temp = *x;
    *x = *y;
    *y = temp;
}

// 对a, b, c进行排序，使得a <= b <= c
void sort(double* a, double* b, double* c) {
    if (*a > *b) swap(a, b);
    if (*a > *c) swap(a, c);
    if (*b > *c) swap(b, c);
}

int main() {
    double a, b, c;

    // 输入三个数
    printf("请输入三角形的三条边: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // 对a, b, c排序
    sort(&a, &b, &c);

    // 判断是否能构成三角形
    if (a + b > c) {
        // 能构成三角形
        if (a == b && b == c) {
            printf("等边三角形\n");
        }
        else if (a == b || b == c) {
            printf("等腰三角形\n");
        }
        else if (a * a + b * b == c * c) {
            printf("直角三角形\n");
        }
        else {
            printf("一般三角形\n");
        }
    }
    else {
        // 不能构成三角形
        printf("不能构成三角形\n");
    }

    return 0;
}
