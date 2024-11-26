#include <stdio.h>
#include <math.h>

// 判断是否为质数的函数
int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;  // 如果能被 i 整除，则不是质数
        }
    }
    return 1;  // 是质数
}

int main() {
    int count = 0;  // 用于控制每行输出8个质数

    // 遍历 100 到 999 之间的数字
    for (int i = 100; i <= 999; i++) {
        if (isPrime(i)) {  // 如果是质数
            printf("%4d", i);  // 按照 4 格输出
            count++;  // 统计输出的质数个数

            // 每8个质数换一行
            if (count % 8 == 0) {
                printf("\n");
            }
        }
    }

    // 如果最后一行未满8个质数，换行
    if (count % 8 != 0) {
        printf("\n");
    }

    return 0;
}
