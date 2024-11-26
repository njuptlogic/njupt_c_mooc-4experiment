#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include<Windows.h>
// 判断是否为质数的函数
int isPrime(int x) {
    if (x < 2) {
        return 0;
    }
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) {
            return 0;  // 不是质数
        }
    }
    return 1;  // 是质数
}

int main() {
    int x;
    int a, b;
    int count = 0;

    // 输入一个正整数x，判断是否为质数
    printf("请输入一个正整数x: ");
    scanf("%d", &x);

    if (isPrime(x)) {
        printf("%d是质数\n", x);
    }
    else {
        printf("%d不是质数\n", x);
    }

    // 输入a和b，确定范围
    printf("请输入范围a和b (10 <= a <= b <= 1000): ");
    scanf("%d %d", &a, &b);

    if (a < 10 || b > 1000 || a > b) {
        printf("输入范围无效，确保10 <= a <= b <= 1000。\n");
        return 1;
    }

    // 在范围[a, b]内找出所有质数，并每行输出5个
    printf("范围 [%d, %d] 内的质数为:\n", a, b);
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            printf("%4d", i);
            count++;
            // 每行输出5个
            if (count % 5 == 0) {
                printf("\n");
            }
        }
    }

    // 如果最后一行不足5个质数，换行
    if (count % 5 != 0) {
        printf("\n");
    }
    system("pause");
    return 0;
}
